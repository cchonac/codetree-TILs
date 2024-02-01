#include <iostream>
using namespace std;

int main() {
    int N,M;
    cin>>N>>M;
    int coins[N+1];
    int dp[101]={0,};
    for(int i=1;i<=N;i++){
        cin>>coins[i]; //1,4,5
    }
    for(int i=1;i<=M;i++){
        for(int j=1;j<=N;j++){
            if(i>=coins[j]){
                dp[i]=min(dp[i],dp[i-coins[j]])+1;
            }
            
        }
    }
    int ans=dp[M];
    if(ans==0){
        ans=-1;
    }
    
    cout<<ans;
    return 0;
}