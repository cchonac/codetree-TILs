#include <iostream>
#include <queue>
using namespace std;


int main() {
    priority_queue<int>pq;
    int N;
    cin>>N;
    while(N--){
        string str;
        cin>>str;
        if((str=="push")){
            int num;
            cin>>num;
            pq.push(num);
        }else if(str=="pop"){
            int num;
            num=pq.top();
            pq.pop();
            cout<<num<<"\n";
        }else if(str=="size"){
            cout<<pq.size()<<"\n";
        }else if(str=="empty"){ //비어있다면 true, 차있으면 false
            cout<<pq.empty()<<"\n";
        }else if(str=="top"){
            cout<<pq.top()<<"\n";
        }

    }

    return 0;
}