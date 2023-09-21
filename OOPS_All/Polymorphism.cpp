#include<iostream>
using namespace std;
class A{
    public:
    void sayHello(){
        cout<<"Hello Love Babbar"<<endl;
    }
    int sayHello(char name){
        cout<<"Hello Love Babbar"<<endl;
        return 1;
    }
    void sayHello(string name){
        cout<<"Hello"<<name<<endl;
    }
};
int main(){
    A obj;
    obj.sayHello();

    return 0;
}
