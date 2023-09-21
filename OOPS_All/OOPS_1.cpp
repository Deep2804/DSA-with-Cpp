#include<iostream>
using namespace std;
class Animal{
    //state or properties
    public:
    int age;
    string name;
    //behavior
    void eat(){
        cout<<"Eating"<<endl;
    }
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
};
int main() {
    //object creation
    //static
    Animal ramesh;
    cout<<"age of Ramesh is:"<<ramesh.age<<endl;
    cout<<"Name of Ramesh is:"<<ramesh.name<<endl;
    ramesh.eat();
    ramesh.sleep();
    return 0;

}