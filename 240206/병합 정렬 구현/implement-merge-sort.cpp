#include <iostream>
#include <vector>
using namespace std;
//정렬 함수 만들고 그 안에 병함 하는 함수 필요

int N;


void merge(int arr[], int mid, int left, int right){
    int i=left;
    int j=mid+1;

    int k=0;
    int temp[right - left + 1];
    while(i<=mid&&j<=right){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            k++;
            i+=1;
        }else{
            temp[k]=arr[j];
            k++;
            j+=1;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=right){
        temp[k]=arr[j];
        k++;
        j++;
    }
    for (int idx = 0; idx < k; ++idx) {
        arr[left + idx] = temp[idx];
    }
    
    
}
void merge_sort(int arr[], int left, int right ){
    if(left<right){
        int mid = (left+right)/2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);
        merge(arr,mid,left,right);
    }
}
int main() {
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,N-1);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}