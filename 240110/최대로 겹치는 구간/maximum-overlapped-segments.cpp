#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x,y;
    int arr[201]={0,};
    for(int i=0;i<n;i++){
        cin>>x>>y;
        x+=100;
        y+=100;
        for(int i=x;i<y;i++){
            arr[i]++;

        }
    }
    int max=0;
    for(int i=0;i<201;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<endl;



    
    return 0;
}