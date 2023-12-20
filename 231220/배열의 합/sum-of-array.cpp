#include <iostream>
using namespace std;

int main() {
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];

        }
    }
    int num=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            num+=arr[i][j];

        }
        cout<<num<<"\n";
        num=0;
    }
    return 0;
}