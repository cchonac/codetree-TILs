#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int cnt=1;
    int sol=0;
    for(int i=0;i<N;i++){
        if(arr[i]<arr[i+1]){
            cnt++;
        }else{
            cnt=1;
        }
        sol=max(sol,cnt);
    }
    cout<<sol;
    return 0;
}