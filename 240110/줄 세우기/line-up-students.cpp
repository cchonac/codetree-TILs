#include <iostream>
#include <algorithm>
using namespace std;

class People{
    public: int height;
            int weight;
            int number;
    People(int height=0,int weight=0,int number=0){
        this->height=height;
        this->weight=weight;
        this->number=number;
    }
};
bool cmp(People a, People b){
    if(a.height==b.height){
        if(a.weight==b.weight){
            return a.number<b.number;
        }
        return a.weight>b.weight;
    }
    return a.height>b.height;
}

int main() {
    int n;
    cin>>n;
    People person[n];
    int height;
    int weight;
    int num=0;
    for(int i=0;i<n;i++){
        cin>>height>>weight;
        person[i]=People(height,weight,++num); 
    }
    sort(person,person+n,cmp);
    for(int i=0;i<n;i++){
        cout<<person[i].height<<" "<<person[i].weight<<" "<<person[i].number<<endl;
    }
    return 0;
}