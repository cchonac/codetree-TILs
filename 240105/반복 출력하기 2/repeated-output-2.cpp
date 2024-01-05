#include <iostream>
using namespace std;

void Hello(int n){
    if(n==0){
        return;
    }
    Hello(n-1);
    cout<<"HelloWorld"<<endl;
    
}

int main() {
    int num;
    cin>>num;
    Hello(num);
    return 0;
}