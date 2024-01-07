#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[2*n];
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+2*n);
    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[i]=arr[i]+arr[2*n-i-1];
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(arr2[i]>max){
            max=arr2[i];
        }
    }
    cout<<max;
    return 0;
}