#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int arr[N];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int key;
    int j;
    for(int i=1;i<N;i++){
        key=arr[i];
        j=i-1;

        while(j>=0 &&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        //arr[j]<key 가 되는순간 arr[j+1]에 key 가 들어간다.
        arr[j+1]=key;
    }

    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}