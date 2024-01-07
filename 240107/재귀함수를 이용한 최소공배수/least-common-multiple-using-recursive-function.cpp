#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
int lcm(int a,int b){
    return a*b/(gcd(a,b));
}
int arrayLcm(int len,int arr[],int index){
    if(index==len-1){
        return arr[len-1];
    }else return lcm(arr[index],arrayLcm(len,arr,index+1));
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arrayLcm(n,arr,0);
    return 0;
}