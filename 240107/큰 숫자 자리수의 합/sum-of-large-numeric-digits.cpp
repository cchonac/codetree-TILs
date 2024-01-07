#include <iostream>
using namespace std;

int Multi(int &a,int &b,int &c){
    int result = a*b*c;
    return result;
}
int Recursion(int result){
    if(result<10){
        return result;
    }
    return Recursion(result/10)+(result%10);
}

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<Recursion(Multi(a,b,c));
    
    return 0;
}