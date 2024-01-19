#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int min_val=0;
    int ans=INT_MAX;
    int diff; // 차이

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            min_val+=arr[k]*abs(j-k);
            /*diff=abs(arr[k+1]-arr[k]);
            int a = abs(k+1-j);
            min_val+=diff*a;*/
        }
        ans=min(ans,min_val);
        min_val=0;
    }
    cout<<ans;
    return 0;
}