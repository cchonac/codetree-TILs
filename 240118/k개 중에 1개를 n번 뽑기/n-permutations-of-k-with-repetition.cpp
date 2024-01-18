#include <iostream>
using namespace std;

int K,N; //3 2   출력: 1 1 1 2 1 3 | 2 1 2 2 2 3 | 3 1 3 2 3 3
int arr[9]={0,};


void Choose(int k ,int curr_num){ // C(3,0)
    if(curr_num==N){
        for(int i=0;i<N;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=1;i<=k;i++){
        arr[curr_num]=i;
        Choose(k,curr_num+1);
    }

}

int main() {
    cin>>K>>N;
    Choose(K,0);
    return 0;
}