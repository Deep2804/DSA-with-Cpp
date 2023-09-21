#include<iostream>
#include<map>
using namespace std;
class Node {
    public:
      int data;
      Node *next;

      //Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;  
    }

    //Destructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for this data "<<value<<endl;
    }
};
void InsertAtHead(Node * &head,int d){
     //new node create
     Node *temp = new Node(d);
     temp->next = head;
     head = temp;
}
void InsertAtTail(Node* &tail,int d){
    //new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;

}
void InsertAtPosition(Node* &tail,Node* &head,int position, int d){

    if(position == 1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
       temp = temp->next;
        cnt++;

    }

    //inserting at last position
    if(temp ->next == NULL){
        InsertAtTail(tail,d);
        return;
    }
    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void DeleteNode(int position,Node* &head){

    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        //memory free start node
        temp->next = NULL;
        delete temp;
    }
    else {
        //deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
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
Node* floydDetectLoop(Node* head){

    if(head== NULL)
       return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }    
        slow = slow->next;

        if(slow == fast){
            cout<<"present at "<<slow->data<<endl;
        return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head) {
    if(head==NULL)
       return NULL;
    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow!= intersection){
        slow = slow->next;
        intersection = intersection->next;

    }   
    return slow;
}


Node *removeLoop(Node *head)
{
    if( head == NULL)
        return NULL;

    Node* startOfLoop = getStartingNode(head);
    
    if(startOfLoop == NULL)
        return head;
    
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    } 

    temp -> next = NULL;
    return head;
}



int main() {
    //created a new node
    Node* node1 = new Node(10);  
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
     //print(head);

     InsertAtTail(tail,12);
     //print(head);

     InsertAtTail(tail,15);
     //print(head);
     
    InsertAtPosition(tail,head,4,22);
    //print(head);
    tail->next = head->next;

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl; 

    if(floydDetectLoop(head!= NULL)){
        cout<<"Cycle is present"<<endl;
    }
    else {
        cout<<"No Cycle"<<endl;
    }

    Node* loop = getStartingNode(head);
    cout<<"Loop starts at "<<loop->data <<endl;

    removeLoop(head);
    print(head);



    /*DeleteNode(4, head);
    print(head);

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl; 
    */


    
    return 0;
}