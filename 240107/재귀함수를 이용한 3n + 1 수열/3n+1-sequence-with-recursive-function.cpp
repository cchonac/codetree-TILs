#include <iostream>
using namespace std;
int count = 0;
int Recursion(int n){
    if(n==1){
        return count;
    }
    if(n%2==0){
        count++;
        return Recursion(n/2);
    }else{
        count++;
        return Recursion(3*n+1);
    }
}

int main() {
    int n;
    cin>>n;
    cout<<Recursion(n);
    
    return 0;
}