#include <iostream>
using namespace std;

int N;


void swap(int &a, int &b){
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}

int partition(int arr[],int low, int high){
    int pivot=arr[high]; // 피벗을 마지막 원소로 선택
    int i = low-1; // 작은 원소들의 마지막 인덱스

    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;

}

void quick_sort(int arr[], int low, int high){
    if(low<high){
        int pi=partition(arr,low,high);

        quick_sort(arr,low,pi-1);
        quick_sort(arr,pi+1,high);
    }
}

int main() {
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    quick_sort(arr,0,N-1);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}