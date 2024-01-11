#include <iostream>
using namespace std;

const int MAX_POSITION = 2000;
int point=1000;
int arr[MAX_POSITION+3]={0,};

void move(int num, char a){
    if(a=='R'){
        for(int i=0;i<num;i++){
            arr[point++]+=1;
        }
    }else if(a=='L'){
        for(int i=0;i<num;i++){
            arr[point--]+=1;
        }
    }
}


int main() {
    int n;
    cin>>n;
    int x;
    char y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        move(x,y);
    }
    int cnt=0;
    for(int i=0;i<MAX_POSITION;i++){
        if(arr[i]>=2){
            cnt++;
        }
    }
    cout<<cnt;
    
    return 0;
}