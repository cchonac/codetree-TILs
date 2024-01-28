#include <iostream>
using namespace std;
//메모이제이션 중복으로 구하는 것을 제거하기 위한 방법 

int memo[46]={-1,};

int Fib(int n){
    if(memo[n]!=-1){
        return Fib(n);
    }
    if(n<=2){
        memo[n]=1;
    }else{
        memo[n]=Fib(n-1)+Fib(n-2);
    }
    return memo[n];
}

int main() {
    for(int i=0;i<46;i++){
        memo[i]=-1;
    }
    int N;
    cin>>N;
    cout<<Fib(N);

    return 0;
}