#include <iostream>
using namespace std;

int a=1;

void Print(int num){
        
        for(int i=0;i<num;i++){
            if(a>9){
                a=1;
            }
            cout<<a<<" ";
            a++;
            
        }
        cout<<"\n";
    }

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        Print(n);
    }
    
    return 0;
}