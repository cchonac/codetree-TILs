#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;


int main() {
    int n,k;
    string str;
    cin>>n>>k>>str;

    vector<string>vec;
    for(int i=0;i<n;i++){
        string word;
        cin>> word;
        vec.push_back(word);
    }
    vector<string>filtered;
    for (const auto& word : vec){
        if (word.find(str) == 0) {
            filtered.push_back(word);
        }
    }
    sort(filtered.begin(),filtered.end());
    cout<<filtered[k-1];
    return 0;
}