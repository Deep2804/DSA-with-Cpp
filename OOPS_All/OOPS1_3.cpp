#include<iostream>
using namespace std;
class Hero {
    //properties
    private:
    int health;
    public:
    char level;

    Hero(){
        cout<<"Constructor Called"<<endl;
    }

   //Parametrized Constructor
   Hero(int health){
   
     this->health = health;
   }

   Hero(int health,char level){
   
     this->health = health;
     this->level = level;
   }




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
    void setLevel(char ch) {
        level = ch;
    }
 
};

int main() {
   //object created successfully
   
   Hero ramesh(10);

   //cout<<"Address of ramesh:"<< &ramesh<<endl;
   
   ramesh.print();


  //dynamically called
  Hero *h = new Hero(11);
   h->print();

  Hero temp(20,'B');
  temp.print();


    /*
    //Static Allocation
    Hero a;
      a.setLevel('B');
      a.setHealth(70);
    cout<<"Level is:"<<a.level<<endl;
    cout<<"Health is:"<<a.getHealth()<<endl;

    //Dynamically Allocation
   Hero *b = new Hero;
     b->setLevel('A');
     b->setHealth(80);
    cout<<"Level is:"<<(*b).level<<endl;
    cout<<"Health is:"<<(*b).getHealth()<<endl;


    cout<<"Level is:"<<b->level<<endl;
    cout<<"Health is:"<<b->getHealth()<<endl;



    //creation of object
    //Hero ramesh;

    //cout<<"Size of Ramesh is "<<sizeof(ramesh)<<endl;

    //cout<<"Ramesh health is: "<<ramesh.getHealth()<<endl;
    //use setter
    //ramesh.setHealth(70);
    //ramesh.level = 'A';
    //cout<<"health is: "<<ramesh.getHealth()<<endl;
    //cout<<"level is: "<<ramesh.level<<endl;
    //cout<<"Size: "<<sizeof(h1)<<endl;

    */


    return 0;
}