#include <iostream>
#include <string>
using namespace std;


int main() {
    class Secret{
        public: string code;
                char place;
                int time;
        Secret(string code,char place, int time){
            this->code=code;
            this->place=place;
            this->time=time;
        }        

    };
    string code;
    char place;
    int time;
    cin>>code>>place>>time;
    Secret sec=Secret(code,place,time);
    cout<<"secret code : "<<sec.code<<endl;
    cout<<"meeting point : "<<sec.place<<endl;
    cout<<"time : "<<sec.time<<endl;
    
    return 0;
}