#include <iostream>
#include <string>
using namespace std;


bool Palinedrome(string& s){
    int n=s.size();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            return false;
        }
    }
    return true;
}
int main() {
    string str;
    cin>>str;
    if(Palinedrome(str)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}