#include<iostream>
#include<map>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
   //Constructor
   Node(int d){
    this->data = d;
    this->next = NULL;
   }
   //Destructor
   ~Node(){
     int value = this -> data;
     if(this->data != NULL) {
        delete next;
        next = NULL;
     }
     cout<<"Memory is free for node with data "<<value<<endl;  
   }
   

};
void InsertNode(Node* &tail,int element, int d){
   
   //empty list
   if(tail == NULL){
      Node* newNode = new Node(d);
      tail = newNode; 
      newNode->next = newNode;
   }
   else {
      //non-empty list
      //assuming that the list is present in the list
      Node* curr = tail;

      while(curr->data != element){
         curr = curr->next;
      }
      //element found -> curr is representing element wala node
      Node* temp = new Node(d);
      temp->next = curr->next;
      curr->next = temp;
       
   }
}
void print(Node* tail){
   Node* temp = tail;
   //empty list
   if(tail == NULL){
      cout<<"List is empty"<<endl;
      return;
   }
   do {
      cout<<tail->data<<" ";
      tail = tail->next;

   }
   while(tail != temp);
   cout<<endl;
}
void DeleteNode(Node* &tail,int value){
   //empty list
   if(tail== NULL) {
      cout<<"list is empty please check again"<<endl;
      return;
   }
   else {
      //non-empty list
      Node* prev = tail;
      Node* curr = prev->next;
      while(curr->data != value){
         prev = curr;
         curr = curr->next;
      }
      prev->next = curr->next;

      //1 node Linked List
      if(curr==prev){
         tail = NULL;
      }
      //>= 2 node linked List
      else if(tail == curr){
         tail = prev;
      }
      curr->next = NULL;
      delete curr;
   }
}
bool isCircularList(Node* head){
   //empty list
   if(head == NULL){
      return NULL;
   }
   Node* temp = head->next;
   while(temp!=NULL && temp != head){
      temp = temp->next;
   }
   if(temp == head){
      return true;
   }
   return false;
}
bool detectLoop(Node* head){
   if(head==NULL)
   return false;

   map<Node*, bool> visited;
   Node* temp = head;

   while(temp!= NULL){

      //cycle is present 
      if(visited[temp]== true){
         cout<<"Present on element "<<temp->data <<endl;
         return true;

      }
      visited[temp] = true;
      temp = temp -> next;
   }
   return false;

}
int main(){
   Node* tail = NULL;
    //empty list me insert kree ho
   InsertNode(tail,5,3);
   print(tail);

   InsertNode(tail,3,5);
   print(tail);
/*
   InsertNode(tail,5,7);
   print(tail);

   InsertNode(tail,7,9);
   print(tail);

   InsertNode(tail,5,6);
   print(tail);
   
   InsertNode(tail,9,10);
   print(tail);

   InsertNode(tail,3,4);
   print(tail);
   
   DeleteNode(tail,5);
   print(tail);
   */
  if(isCircularList(tail)){
   cout<<"Linked list is Circular in nature"<<endl;
  }
  else {
   cout<<"Linked List is not Circular"<<endl;
  }
   


    return 0;
}