#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void insertAtHead(Node* &head, int d){
    //New Node Create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertAttail(Node* &tail, int d){
    //new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    //node at start position
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt =1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt ++;
    }

    //inserting node at last
    if(temp -> next == NULL){
        insertAttail(tail, d);
        return;
    }

    //creating a node for data
    Node* nodeToinsert = new Node(d);
    nodeToinsert -> next = temp -> next;
    temp -> next = nodeToinsert;

}
int main(){
    //create a new Node
    Node* node1 = new Node(10);
    //cout<< node1 -> data << endl;
    //cout<< node1 -> next << endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAttail(tail, 12);
    print(head);
    insertAttail(tail, 15);
    print(head);
    insertAtPosition(tail, head, 3 ,22);
    print(head);
    cout<<"head "<<head -> data << endl;
    cout<<"tail "<<tail -> data << endl;

    return 0;
}
