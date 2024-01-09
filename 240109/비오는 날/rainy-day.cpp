#include <iostream>
using namespace std;

int main() {
    class Whether{
        public: string when;
                string day;
                string wh;
        Whether(string when="",string day="",string wh=""){
            this->when=when;
            this->day=day;
            this->wh=wh;
        }

    };

    int n;
    cin>>n;
    Whether A[n];

    string when;
    string day;
    string wh;

    int idx=0;
    string state="";
    for(int i=0;i<n;i++){
        cin>>when>>day>>wh;
        A[i]=Whether(when,day,wh);
        if(wh=="Rain"){
            if(state==""){
                state="rain";
                idx=i;
            }
        }

    }
    cout<<A[idx].when<<" "<<A[idx].day<<" "<<A[idx].wh;

    return 0;
}