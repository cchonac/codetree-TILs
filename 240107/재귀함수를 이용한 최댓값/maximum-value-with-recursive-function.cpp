#include <iostream>
using namespace std;


int Max(int x,int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}


int MaxArray(int len, int arr[]){
    if(len == 1){
        return arr[0];
    }else{
        return Max(arr[len-1],MaxArray(len-1,arr));
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<MaxArray(n,arr);
    return 0;
}