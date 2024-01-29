#include <iostream>
#include <cmath>
using namespace std;

int dp[1001]={0,};


int DP(int n){
    dp[0]=1;
    dp[1]=1; 
    for(int i=2;i<=n;i++){
        dp[i]=(dp[i-1]+dp[i-2])%(10007);
    }
    return dp[n];
}

int main() {
    int N;
    cin>>N;
    cout<<DP(N);
    
    return 0;
}