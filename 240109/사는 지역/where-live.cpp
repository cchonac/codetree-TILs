#include <iostream>
using namespace std;

int main() {
    class People{
        public: string name;
                string number;
                string home;
        People(string name="",string number="",string home=""){
            this->name=name;
            this->number=number;
            this->home=home;
        }        
    };
    int n;
    string name,number,home;
    cin>>n;
    People person[n];

    for(int i=0;i<n;i++){
        cin>>name>>number>>home;
        person[i]=People(name,number,home);
    }
    int last_idx =0;
    for(int i=0;i<n;i++){
        if(person[i].name>person[last_idx].name){
            last_idx=i;
        }
    }
    cout<<"name "<<person[last_idx].name<<endl;
    cout<<"addr "<<person[last_idx].number<<endl;
    cout<<"city "<<person[last_idx].home<<endl;

    return 0;
}