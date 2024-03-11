#include <iostream>
using namespace std;

string a;

void add(int x, int y){
    cout<<x<<" "<<a<<" "<<y<<" = "<<x+y<<"\n";
}
void diff(int x, int y){
    cout<<x<<" "<<a<<" "<<y<<" = "<<x-y<<"\n";
}
void multi(int x, int y){
    cout<<x<<" "<<a<<" "<<y<<" = "<<x*y<<"\n";
}
void divine(int x, int y){
    cout<<x<<" "<<a<<" "<<y<<" = "<<x/y<<"\n";
}

int main() {
    int x, y;
    cin>>x>>a>>y;
    if(a=="+"){
        add(x,y);
    }else if(a=="-"){
        diff(x,y);
    }else if(a=="*"){
        multi(x,y);
    }else if(a=="/"){
        divine(x,y);
    }
    return 0;
}