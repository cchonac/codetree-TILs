#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        vec.push_back(element);
        if(i%2==0){ //홀수이면
            sort(vec.begin(),vec.begin()+i+1);
             int mid_idx=i/2;
            cout<<vec[mid_idx]<<" ";
        }
        
    }
    return 0;
}