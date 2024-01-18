#include <iostream>
using namespace std;

int main() {
    int n ,t;
    cin>>n>>t;

    int arr[n];

    int cnt,ans=0;

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
    if(ans==1){
        cout<<0;
    }else{
        cout<<ans;
    }
    
    return 0;
}