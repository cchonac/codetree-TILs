#include <iostream>
using namespace std;

int main() {
    class code{
        public: string codename;
                int score;
        code(string codename="",int score=0){
            this->codename=codename;
            this->score=score;
        }

    };
    code coder[5];
    string codename;
    int score;
    int min=0;
    int idx;
    for(int i=0;i<5;i++){
        cin>>codename>>score;
        coder[i]=code(codename,score);
        if(score<min){
            min=score;
            idx=i;
        }
    }
    cout<<coder[idx].codename<<" "<<coder[idx].score;
    return 0;
}