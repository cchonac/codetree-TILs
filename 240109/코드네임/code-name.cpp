#include <iostream>
using namespace std;

int main() {
    class Code{
        public: char codename;
                int score;
        Code(char codename =0 ,int score=0){
            this->codename=codename;
            this->score=score;
        }

    };
    Code coder[5];
    char codename;
    int score;
    int min=101;
    int idx;
    for(int i=0;i<5;i++){
        cin>>codename>>score;
        coder[i]=Code(codename,score);
        if(score<min){
            min=score;
            idx=i;
        }
    }
    cout<<coder[idx].codename<<" "<<coder[idx].score;
    return 0;
}