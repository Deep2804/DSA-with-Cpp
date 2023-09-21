#include<iostream>
using namespace std;

void insertAtHead(Node* &head,int data){
    if(head == NULL){
        tail = newNode;
    }
    
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void insertAtTail(Node* &head,int data){
       Node* newNode = new Node(data);
       tail->next = newNode;
       tail = newNode;
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,20);
    insertAtHead(head,50);
    insertAtHead(head,60);
    insertAtHead(head,90);
    return 0;

}