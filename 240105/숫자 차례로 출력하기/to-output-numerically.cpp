#include <iostream>
using namespace std;

void PrintA(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    PrintA(n-1);
}

void PrintB(int n){
    if(n==0){
        return;
    }
    PrintB(n-1);
    cout<<n<<" ";
}

int main() {
    int n;
    cin>>n;
    PrintB(n);
    cout<<endl;
    PrintA(n);
    return 0;
}