#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x1,x2,y1,y2;
    int arr[201][201]={0,};
    for(int i=0;i<n;i++){
        cin>>x1>>y1>>x2>>y2;
        x1+=100;
        x2+=100;
        y1+=100;
        y2+=100;
        for(int j=x1;j<x2;j++){
          for(int h=y1;h<y2;h++){
            if(arr[j][h]==0){
                arr[j][h]++;
            }
          }
        }
    }
    int cnt=0;
    for(int i=0;i<201;i++){
        for(int j=0;j<201;j++){
            if(arr[i][j]>0){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}