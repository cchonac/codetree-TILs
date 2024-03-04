#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int>pq;
    int N;
    cin>>N;
    while(N--){
        int num;
        cin>>num;
        if(num==0){
            if(pq.empty()){
                cout<<0<<"\n";
            }else{
                cout<<-pq.top()<<"\n";
                pq.pop();
            }

        }else{
            pq.push(-num);
        }
    }
    return 0;
}