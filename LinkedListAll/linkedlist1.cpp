#include<iosteam>
using namespace std;
class Node {
    public
}

void print(Node* &head) {
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main() {
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    print first;
    cout<<
}