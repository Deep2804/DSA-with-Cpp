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
    static int TimeToComplete;

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

    static int random() {
        return TimeToComplete;

    }
    ~Hero(){
        cout<<"Desctructor bhai called"<<endl;
    }
 
};

int Hero::TimeToComplete = 5;
int main() {


  //cout<<Hero::TimeToComplete<<endl;
  cout<<Hero::random()<<endl;
 






 
 /* Hero a;

  cout<<a.TimeToComplete<<endl;

  Hero b;
  b.TimeToComplete = 10;
  cout<<a.TimeToComplete<<endl;
  cout<<b.TimeToComplete<<endl;
*/
    //static
    //Hero a;
    //dynamic
    //Hero *b = new Hero();
   //manually destructor call
   //delete b;







    return 0;
}