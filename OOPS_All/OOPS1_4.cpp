#include<iostream>
#include<string.h>
using namespace std;
class Hero {
    //properties
    private:
    int health;
    public:
    char *name;
    char level;

    Hero(){
        cout<<"Simple Constructor Called"<<endl;
        name = new char[100];
    }

   //Parametrized Constructor
   Hero(int health){
   
     this->health = health;
   }

   Hero(int health,char level){
   
     this->health = health;
     this->level = level;
   }

  //copy constructor
  Hero(Hero& temp){
    char *ch = new char[strlen(temp.name)+1];
    strcpy(ch , temp.name);
    this->name =ch;
    cout<<"Copy Constructor Called"<<endl;
    this->health = temp.health;
    this->level = temp.level;
  }
  


    void print() {
        cout<<endl;
        cout<<" [ Name: "<<this->name<<",";
        cout<<"Health : "<<this->health<<",";
        cout<<"level: "<<this->level<<" ] ";
        cout<<endl;

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
    void setName(char name[]){
        strcpy(this->name,name);
    }
 
};

int main() {

Hero hero1;
hero1.setHealth(50);
hero1.setLevel('T');
char name[7] = "Babbar";
hero1.setName(name);

//hero1.print();

//use default copy constructor
Hero hero2(hero1);
//hero2.print();
//Hero hero2 = hero1;

hero1.name[0] = 'G';
hero1.print();

hero2.print();

hero1 = hero2;

hero1.print();

hero2.print();





  /*Hero s(70,'C');
  s.print();

  //copy constructor
  Hero r(s);
  r.print();
  */



   //object created successfully
   
   //Hero ramesh(10);

   //cout<<"Address of ramesh:"<< &ramesh<<endl;
   
   //ramesh.print();


  //dynamically called
  //Hero *h = new Hero(11);
  //  h->print();

  //Hero temp(20,'B');
  //temp.print();


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