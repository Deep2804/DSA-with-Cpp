#include<iostream>
#include<stack>
using namespace std;

int main(){

    //creation of stack
   stack<int> s;

   //push operation
   s.push(2);
   s.push(3);
  
   
   //pop operation
   s.pop();

   //peek element
   cout<<"Printing Top Element "<<s.top()<<endl;

   //empty stack
   if(s.empty()){
    cout<<"Stack is Empty"<<endl;
   }
   else {
    cout<<"Stack is not Empty"<<endl;
   }
   cout<<"Size of Stack is "<<s.size()<<endl;

}