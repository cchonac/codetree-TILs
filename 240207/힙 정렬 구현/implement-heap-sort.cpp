#include <iostream>
using namespace std;

int N;

void swap(int& a, int& b){
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}
void heapify(int arr[], int n, int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;

    if(left<n&&arr[left]>arr[largest]){ //왼쪽 자식 값이 더 큰경우
        largest=left;
    }
    if(right<n&&arr[right]>arr[largest]){ //오른쪽 자식 값이 더 큰경우
        largest=right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }

}

void heap_sort(int arr[],int n){
    // max-heap을 만들어준다.
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    //n을 하나씩 줄여나가면서 최대값과 배열 제일 끝 값을 교환한다. 
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
    
}

int main() {
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    heap_sort(arr,N);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}