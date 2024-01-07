#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int m,n;
    cin>>m>>n;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    cout<<arr[n-1];
    return 0;
}