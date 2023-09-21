#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int,string> m;

    m[1]="Deepak";
    m[2]="Singh";
    m[13]="Rajput";

    m.insert({5,"Rudhra"});

    cout<<"Before Erase"<<endl;

    for(auto i:m) {
        cout<<i.first<<"  "<<i.second<<endl;
    }

    cout<<"finding 13 ->"<<m.count(13)<<endl;
    cout<<"finding -13 ->"<<m.count(-13)<<endl;

    //m.erase(13);
    cout<<"After Erase"<<endl;
    for(auto i:m) {
        cout<<i.first<<"  "<<i.second<<endl;
    } cout<<endl<<endl;

    auto it = m.find(5);
    for(auto i=it;i!=m.end();i++) {
        cout<<(*i).first<<endl;
    }

}