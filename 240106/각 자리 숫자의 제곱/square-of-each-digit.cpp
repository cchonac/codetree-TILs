#include <iostream>
#include <cmath>
using namespace std;

int Recursion(int num){
    if(num<10){
        return num*num;
    }
    return Recursion(num/10)+((num%10)*(num%10));

}

int main() {
    int num;
    cin>>num;
    cout<<Recursion(num);
    return 0;
}