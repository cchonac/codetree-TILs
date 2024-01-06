#include <iostream>
using namespace std;
int count = 0;

void Recursion(int n){
    if(n==1){
        return;
    }
    if(n%2==0){
        count++;
        return Recursion(n/2);    
    }else{
        count++;
        return Recursion(n/3);
    }
}

int main() {
    int num;
    cin>>num;
    Recursion(num);
    cout<<count;
    return 0;
}