#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x1,x2,y1,y2;
    int arr[201][201]={0,};
    for(int i=1;i<=n;i++){
        cin>>x1>>y1>>x2>>y2;
        x1+=100;
        x2+=100;
        y1+=100;
        y2+=100;

        for(int j=x1;j<x2;j++){
            for(int h=y1;h<y2;h++){
                arr[j][h]=i%2+1; // 홀수
            }
        }
    }
    int bluearea=0;
    for (int i = 0; i < 201; i++) {
        for (int j = 0; j < 201; j++) {
            if (arr[i][j] == 1) {
                bluearea++;
            }
        }
    }
    cout<<bluearea;

    return 0;
}