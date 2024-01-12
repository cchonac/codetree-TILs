#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;
    int cnt=1;

    int currentCount, currentNum, beforeNum;
    cin>>beforeNum;
    currentCount=1;



    for(int i=1;i<n;i++){
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