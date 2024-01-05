#include <iostream>
using namespace std;

void make(int &a, int &b){
    if(a<b){
        a+=10;
        b*=2;
    }else{
        b+=10;
        a*=2;
    }
}

int main() {
    int x,y;
    cin>>x>>y;
    make(x,y);
    cout<<x<<" "<<y;
    return 0;
}