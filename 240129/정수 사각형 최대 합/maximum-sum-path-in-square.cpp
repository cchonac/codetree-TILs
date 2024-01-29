#include <iostream>
using namespace std;
//점화식 관계를 찾는 것이 중요 
//주로 바텀 다운 방식으로 구현

int dp[101][101]={0,};
int arr[101][101]={0,};

int main() {
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin>>arr[i][j];
        }
    }
    dp[1][1]=arr[1][1];
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            dp[i][j]=max(dp[i-1][j],dp[i][j-1])+arr[i][j];
        }
    }
    

    cout<<dp[N][N];
    return 0;
}