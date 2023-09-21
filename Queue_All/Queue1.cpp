#include<iostream>
#include<queue>
using namespace std;

int main(){
    //creates a queue
    queue<int> q;

    //push operation
    q.push(3);
    cout<<"Front Element is: "<<q.front()<<endl;

    q.push(5);
    cout<<"Front Element is: "<<q.front()<<endl;

    q.push(7);
    cout<<"Front Element is: "<<q.front()<<endl;
    
 cout<<"Size of Queue is: "<<q.size()<<endl;
   //pop operation
   q.pop();
   q.pop();
   q.pop();

   cout<<"Size of Queue is: "<<q.size()<<endl;

   //check isEmpty
   if(q.empty()){
    cout<<"Queue is Empty"<<endl;
   }
   else {
    cout<<"Queue is not Empty"<<endl;
   }
   
    
   return 0;
}