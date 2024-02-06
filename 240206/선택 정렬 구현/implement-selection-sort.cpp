#include <iostream>

using namespace std;

int main() {
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i]; 
    }
    int minIdx;
    int tmp;
    for(int i=0;i<N;i++){
        minIdx=i;
        for(int j=i+1;j<N;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }
        tmp=arr[minIdx];
        arr[minIdx]=arr[i];
        arr[i]=tmp;
        
    }
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}