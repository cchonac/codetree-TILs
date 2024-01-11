#include <iostream>
using namespace std;

int main() {
    int n,x,y;
    cin>>n;
    int arr[101]={0,};
    for(int i=0;i<n;i++){
        cin>>x>>y;
        for(int j=x;j<=y;j++){
            arr[j]++;
        }
    }
    int max=0;
    for(int i=0;i<101;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}