#include <iostream>
#include <queue>
#include <utility>
using namespace std;

//숫자 0이 이동할수 있는 곳
int graph[101][101];
bool visited[101][101];

queue<pair<int,int>> que;

int N,K;



void Push(int x,int y){
    visited[x][y]=true;
    que.push(make_pair(x,y));
}
bool InRange(int x, int y){
    return x>=0&&x<N&&y>=0&&y<N;
}
bool CanGo(int x, int y){
    if(!InRange(x,y)){
        return false;
    }
    if(visited[x][y]==true||graph[x][y]==1){
        return false;
    }
    
    return true;
}

void BFS(){
    
    while(!que.empty()){
        pair<int,int>now=que.front();
        int x=now.first;
        int y=now.second;
        que.pop();
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};

        for(int i=0;i<4;i++){
            int new_x=x+dx[i];
            int new_y=y+dy[i];
            if(CanGo(new_x,new_y)){
                
                Push(new_x,new_y);

            }
        }
    }
}


int main() {
    
    cin>>N>>K;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>graph[i][j];
        }
    }
    int x,y;
 
    while(K--){
        cin>>x>>y;
        que.push(make_pair(x-1,y-1));
        visited[x-1][y-1]=true;
    }

    BFS();

    int ans =0;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(visited[i][j]){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}