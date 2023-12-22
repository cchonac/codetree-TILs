#include <iostream>
using namespace std;

int N;
void modify(int *arr){
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            arr[i]=arr[i]/2;
        }
    }
}
int main() {
    
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    modify(arr);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}