#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;
    int cnt=0;

    int currentCount, currentNum, beforeNum;
    cin>>beforeNum;
    currentCount=1;



    for(int i=0;i<n-1;i++){
        cin>>currentNum;
        if(beforeNum==currentNum){
            currentCount++;
            
        }else{
            currentCount=1;
        }
        cnt=max(cnt,currentCount);
        beforeNum=currentNum;
    }
    cout<<cnt;
    return 0;
}