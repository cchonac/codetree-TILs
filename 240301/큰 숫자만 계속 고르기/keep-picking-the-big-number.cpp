#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N,M;
    priority_queue<int>pq;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        int num;
        cin>>num;
        pq.push(num);
    }
    while(M--){
        int ans=pq.top();
        pq.pop();
        pq.push(ans-1);
    }
    cout<<pq.top();
    return 0;
}