#include <iostream>
#include <cmath>
using namespace std;

int Recursion(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return Recursion(floor(n/3))+Recursion(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<Recursion(n);
    return 0;
}