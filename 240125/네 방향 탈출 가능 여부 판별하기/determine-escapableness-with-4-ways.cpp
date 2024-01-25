#include <iostream>
#include <queue> 
#include <utility> //pair
using namespace std;

//1. 시작점으로 부터 연결된 모든 정점을 전부 방문해야 한다.
//2. 이미 방문한 정점은 다시는 방문하지 않는다. 

int N,M;
int graph[101][101];
bool visited[101][101];
queue<pair<int,int>>que;

// 격자 안에 있는지 방문한 적이 없는지 뱀이 없는지 

bool InRange(int x, int y){
    return x>=0&&x<N&&y>=0&&y<M;
}

bool CanGo(int x,int y){
    if(!InRange(x,y)){
        return false;
    }
    if(visited[x][y]||graph[x][y]==0){ //뱀이 없는경우 0
        return false;
    }
    return true;
}
void Push(int x, int y){

    visited[x][y]=true;
    que.push(make_pair(x,y));
}

void BFS(){
    int dx[2]={1,0};
    int dy[2]={0,1};
    while(!que.empty()){
        pair<int,int>cur_pos=que.front();
        que.pop();

        int x=cur_pos.first;
        int y=cur_pos.second;
        for(int i=0;i<2;i++){
            int new_x=x+dx[i];
            int new_y=y+dy[i];
            if(CanGo(new_x,new_y)){
                Push(new_x,new_y);
            }

        }
    }
}


int main() {
    cin>>N>>M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>graph[i][j];
        }
    }
    Push(0,0);
    BFS();
    cout<<graph[N-1][M-1];

    
    return 0;
}