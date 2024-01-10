#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int arr[n]={0,};
    int a,b;
    for(int i=0;i<k;i++){
        cin>>a>>b;
        for(int i=a-1;i<b;i++){
            arr[i]++;

        }
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<endl;

    return 0;
}