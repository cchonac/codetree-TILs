#include <iostream>
using namespace std;

int N;

void change(int*arr){
    for(int i=0;i<N;i++){
        if(arr[i]<0){
            arr[i]*=-1;
        }
    }
}
int main() {
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    change(arr);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}