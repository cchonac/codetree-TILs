#include <iostream>
#include <algorithm>
using namespace std;

class People{
    public: string name;
            int height;
            double weight;

    People(string name="", int height=0, double weight=0){
        this->name=name;
        this->height=height;
        this->weight=weight;
    }        

};
bool cmp1(People a, People b){
    return a.name<b.name;
}
bool cmp2(People a, People b){
    return a.height>b.height;
}



int main() {
    string name;
    int height;
    double weight;

    People person[5];

    for(int i=0;i<5;i++){
        cin>>name>>height>>weight;
        person[i].name=name;
        person[i].height=height;
        person[i].weight=weight;
    }
    cout<<"name"<<endl;
    sort(person,person+5,cmp1);
    for(int i=0;i<5;i++){
        cout<<person[i].name<<" "<<person[i].height<<" "<<fixed<<setprecision(1)<<person[i].weight<<endl;
    }
    cout<<endl;
    cout<<"height"<<endl;
    sort(person,person+5,cmp2);
    for(int i=0;i<5;i++){
        cout<<person[i].name<<" "<<person[i].height<<" "<<fixed<<setprecision(1)<<person[i].weight<<endl;
    }
    

    return 0;
}