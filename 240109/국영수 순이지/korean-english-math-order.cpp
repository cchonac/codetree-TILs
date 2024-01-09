#include <iostream>
#include <algorithm>
using namespace std;

class People{
    public: string name;
            int kor;
            int eng;
            int math;
    People(string name="",int kor=0, int eng=0, int math=0){
        this->name=name;
        this->kor=kor;
        this->eng=eng;
        this->math=math;
    }
    
};
bool cmp(People a, People b){
    if(a.kor==b.kor){
        if(a.eng==b.eng){
            return a.math>b.math;
        }
        return a.eng>b.eng;
    }
    return a.kor>b.kor;
}


int main() {
    int n;
    cin>>n;
    People person[n];
    string name;
    int kor;
    int eng;
    int math;
    for(int i=0;i<n;i++){
        cin>>name>>kor>>eng>>math;
        person[i]=People(name,kor,eng,math);
    }
    sort(person,person+n,cmp);
    for(int i=0;i<n;i++){
        cout<<person[i].name<<" "<<person[i].kor<<" "<<person[i].eng<<" "<<person[i].math<<endl;
    }

    
    return 0;
}