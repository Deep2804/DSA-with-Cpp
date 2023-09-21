#include<iostream>
using namespace std;
class Hero {
    //properties
    private:
    int health;
    public:
    char level;

    void print() {
        cout<<level<<endl;
    }
    int getHealth() {
        return health;
    }
    char getLevel(){

        return level;
    }
    void setHealth(int h) {
       
        health = h;

    }
    void setHealth(char ch) {
        level = ch;
    }
 
};

int main() {
    //creation of object
    Hero ramesh;

    cout<<"Size of Ramesh is "<<sizeof(ramesh)<<endl;

    cout<<"Ramesh health is: "<<ramesh.getHealth()<<endl;
    //use setter
    ramesh.setHealth(70);
    ramesh.level = 'A';
    cout<<"health is: "<<ramesh.getHealth()<<endl;
    cout<<"level is: "<<ramesh.level<<endl;
    //cout<<"Size: "<<sizeof(h1)<<endl;


    return 0;
}