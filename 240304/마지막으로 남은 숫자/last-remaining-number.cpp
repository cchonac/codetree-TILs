#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int>pq;
    int N;
    cin>>N;
    while(N--){
        int num;
        cin >> num;
        pq.push(num);
    }
    while(pq.size()>1){
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        if(first!=second){
            pq.push(abs(first-second));
        }

    }
    if(pq.empty()){
        cout<<-1<<"\n";
    }else{
        cout<<pq.top()<<"\n";
    }
    return 0;
}