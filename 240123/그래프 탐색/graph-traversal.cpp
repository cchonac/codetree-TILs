#include <iostream>
#include <vector>
using namespace std;

int ans = 0;


//1번 정점에서 도달할 수 있는 서로 다른 정점의 수를 출력
//DFS 는 재귀를 사용해야함
void DFS(int vertex,bool visited[],vector<vector<int>>&graph){
    for(int i=0;i<graph[vertex].size();i++){
        int curr_v=graph[vertex][i];
        if(!visited[curr_v]){
            visited[curr_v]=true;
            ans++;
            DFS(curr_v,visited,graph);

        }
    }
}



int main() {
    int N,M;

    cin>>N>>M;
    vector<vector<int>>graph(N+1);
    bool visited[N+1]={false};
    
    int x,y;
    for(int i=0;i<M;i++){
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    visited[1]=true;
    DFS(1,visited,graph);
    cout<<ans;
    return 0;
}