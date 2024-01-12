#include <iostream>
using namespace std;

int main() {
    int ax1,ax2,ay1,ay2;
    int bx1,bx2,by1,by2;
    int mx1,mx2,my1,my2;

    cin>>ax1>>ay1>>ax2>>ay2;
    cin>>bx1>>by1>>bx2>>by2;
    cin>>mx1>>my1>>mx2>>my2;

    ax1+=1000;
    ax2+=1000;
    ay1+=1000;
    ay2+=1000;
    bx1+=1000;
    bx2+=1000;
    by1+=1000;
    by2+=1000;
    mx1+=1000;
    mx2+=1000;
    my1+=1000;
    my2+=1000;

    int arr[2001][2001]={0,};
    for(int i=ax1;i<ax2;i++){
        for(int j=ay1;j<ay2;j++){
            arr[i][j]++;
        }
    }
    for(int i=bx1;i<bx2;i++){
        for(int j=by1;j<by2;j++){
            arr[i][j]++;
        }
    }
    for(int i=mx1;i<mx2;i++){
        for(int j=my1;j<my2;j++){
            arr[i][j]--;
        }
    }
    int cnt=0;
    for(int i=0;i<2001;i++){
        for(int j=0;j<2001;j++){
            if(arr[i][j]>0){
                cnt++;
            }
        }
    }
    cout<<cnt;


    return 0;
}