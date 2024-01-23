#include <iostream>
#include <vector>
using namespace std;

int n,m;
bool visited[101][101]={false};
int graph[101][101];
int ans;

// new_x new_y
// 좌표가 격자 안에 있어야한다.
// 좌표에 방문한 적이 없어야한다.
// 좌표에 뱀이 없어야 한다.
bool InRange(int x, int y){
    return 0<=x&&x<<n&&0<=y&&y<m;
}
//뱀이 없는 경우 1, 뱀이 있는경우 0
bool CanGo(int x, int y){
    if(!InRange(x,y)){
        return false;
    }
    if(visited[x][y]||graph[x][y]==0){
        return false;
    }
    return true;

}

void DFS(int x, int y){
    int dx[2]={1,0};
    int dy[2]={0,1};
    for(int i=0;i<2;i++){
        int new_x=x+dx[i];
        int new_y=y+dy[i];

        if(CanGo(new_x,new_y)){
        graph[new_x][new_y]++;
        visited[new_x][new_y]=true;
        DFS(new_x,new_y);
    }
    }
    
}



int main() {
    
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>graph[i][j];
        }
    }
    visited[1][1]=true;
    DFS(1,1);

    if (visited[n][m]) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}