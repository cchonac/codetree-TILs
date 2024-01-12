#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int beforeNum, currentNum;
    int cnt=1;
    int maxcnt=1;
    cin>>beforeNum;
    for(int i=1;i<n;i++){
            cin>>currentNum;
            if(currentNum*beforeNum>0){
                cnt++;
            }else{
                cnt=1;
            }
        maxcnt=max(cnt,maxcnt);
        beforeNum=currentNum;    
    }
    cout<<maxcnt;
    

    
    return 0;
}