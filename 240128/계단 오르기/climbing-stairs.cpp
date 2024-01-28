#include <iostream>
using namespace std;

//2계단 혹은 3계단 
//항상 tabulation으로 문제를 해결하는 것을 추천
int dp[1001]={0,};

int CountWays(int n){
    dp[0]=1;
    for(int i=1;i<=n;i++){
        if(i>=2){
            dp[i]=(dp[i]+dp[i-2])%10007;
        }
        if(i>=3){
            dp[i]=(dp[i]+dp[i-3])%10007;
        }
    }
    return dp[n];
}
int main() {
    int N;
    cin>>N;
    cout<<CountWays(N);
    return 0;
}