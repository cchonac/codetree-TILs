#include<iostream>
using namespace std;

int K,N;
int arr[9]={0,};

void Choose(int k,int curr_num){
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

int main(){
    cin>>K>>N;
    Choose(K,0);

}