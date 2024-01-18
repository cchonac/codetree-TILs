#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    char a;
    int num;
    int arr1[1000001]={0,};
    int arr2[1000001]={0,};

    int j=0;
    for(int i=0;i<n;i++){ //index는 시점으로 생각 1초후, 2초후... 
        cin>>a>>num;
        while(num--){
            if(a=='R'){
                arr1[j+1]=arr1[j]+1;
            
            }else if(a=='L'){
                arr1[j+1]=arr1[j]-1;    
          }
          j++;

        }
        

    }
    int k=0;
    for(int i=0;i<m;i++){ //index는 시점으로 생각 1초후, 2초후... 
        cin>>a>>num;
        while(num--){
            if(a=='R'){
                arr2[k+1]=arr2[k]+1;
            
            }else if(a=='L'){
                arr2[k+1]=arr2[k]-1;    
          }
          k++;

        }
        
    }
    int ans=-1;
    for(int i=1;i<1000001;i++){
        if(arr1[i]==arr2[i]){
            ans=i;
            break;
        }

    }
    cout<<ans;
    return 0;
}