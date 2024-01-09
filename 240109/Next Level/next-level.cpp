#include <iostream>
using namespace std;

int main() {
    class game{
        public: string id;
                int level;
        game(string id="",int level=0){
            this->id=id;
            this->level=level;
        }
    };
    game g1=game("codetree",10);
    string str;
    int level;
    cin>>str>>level;
    game g2=game();
    g2.id=str;
    g2.level=level;
    cout<<"user "<<g1.id<<" lv "<<g1.level<<endl;
    cout<<"user "<<g2.id<<" lv "<<g2.level<<endl;

    return 0;
}