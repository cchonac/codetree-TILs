#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;



int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> vec;
    int a,b,c;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        c=abs(a)+abs(b);
        vec.push_back(make_pair(c,i+1));
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++){
        cout<<vec[i].second<<endl;
    }
    return 0;
}