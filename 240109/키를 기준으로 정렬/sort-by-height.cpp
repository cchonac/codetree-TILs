#include <iostream>
#include <algorithm>
using namespace std; 

class People{
        public: string name;
                int height;
                int weight;
        People(string name ="", int height=0, int weight=0){
            this->name =name; 
            this->height=height;
            this->weight=weight;

        }
    };

bool cmp(People a, People b){
        return a.height<b.height;
    }


int main() {
    
    int n;
    cin>>n;
    People person[n];
    string name;
    int height;
    int weight;
    
    for(int i=0;i<n;i++){
        cin>>name>>height>>weight;
        person[i]=People(name,height,weight);
    }
    sort(person,person+n,cmp);
     for(int i=0;i<n;i++){
        cout<<person[i].name<<" "<<person[i].height<<" "<<person[i].weight<<endl;
    }


    return 0;
}