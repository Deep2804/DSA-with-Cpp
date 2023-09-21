#include<iostream>
using namespace std;
class Node
    {
    public:
         int data;
         Node *next;
        Node()
        {
            this->data = 0;
            next = NULL;
        }
        Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };
        


Node* reverse1(Node* head){
    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* miniHead = reverse1(head->next);
    head->next->next = head;
    head->next = NULL;
    return miniHead;
}

void reverse(Node* &head, Node* curr, Node* prev){
    //base case
    if(curr == NULL){
        head = prev;
        return;
    }

    Node*forward = curr->next;
    reverse(head,forward,curr);
    curr->next = prev;

}

Node* reverseLinkedList(Node *head)
{
    return reverse1(head);

   //Recursive Approach
   /* Node* curr = head;
    Node* prev = NULL;
    reverse(head,curr,prev);
    return head;
    */

   //Iterative Approach
    // Write your code here
    /*if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
    */
}
