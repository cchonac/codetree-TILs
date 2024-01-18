#include <iostream>
using namespace std;

int main() {
    int n ,t;
    cin>>n>>t;

    int arr[n];

    int cnt=0,ans=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>t){
            cnt++;
        }else{
            cnt=0;
        }
        ans=max(ans,cnt);
    }
    cout<<ans;
    return 0;
}