#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *prev;
    Node *next;

    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    //Destructor
    ~Node(){
        int value = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node data "<<value<<endl;
    }
};
void print(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;
}
//Gives Length of Linked List
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp!=NULL){
        len++;
        temp = temp->next;

    }
    return len;
}
void InsertAtHead(Node* &tail,Node* &head, int d){
    //int len = 0 ;
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else {
         Node* temp = new Node(d);
         temp->next = head;
         head->prev = temp;
         head = temp;
    }
}
void InsertAtTail(Node* &tail,Node* &head, int d){
    //new node create
    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else {
          Node* temp = new Node(d);
          tail->next = temp;
          temp->prev = tail;
          tail = temp;
    }
}
void InsertAtPosition(Node* &tail,Node* &head, int position ,int d){
    //insert at Start
    if(position==1){
        InsertAtHead(tail,head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //insert at last position
    if(temp->next == NULL){
        InsertAtTail(tail,head,d);
        return;
    }
    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

// ** Deletion
void DeleteNode(int position,Node* &head){

    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
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
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr; 
    }
}
int main(){
    
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout<<getLength(head)<<endl;
    InsertAtHead(tail,head,11);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    InsertAtHead(tail,head,13);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    InsertAtHead(tail,head,12);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    InsertAtTail(tail,head,15);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;


    InsertAtPosition(tail,head,2,100);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    InsertAtPosition(tail,head,4,102);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    InsertAtPosition(tail,head,7,105);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    DeleteNode(7,head);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    return 0;
}