#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node* head){
    Node* temp =head;
    while(temp!=NULL){
        cout << temp->val <<" ";
        temp = temp->next;
    }
    cout << endl;
}

void del_at_any_position(Node* &head,int idx){
    Node* temp = head;
    for(int i=1;i<idx;i++){
        temp = temp->next;
    }
    Node* delNode = temp->next;
    temp->next->next->prev = temp;
    temp->next = temp->next->next;
    delete delNode; 
    
}


int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = new Node(50);

    head->next = a; 
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    c->next = tail;
    tail->prev = c;

    tail->next = NULL;

   
    del_at_any_position(head,3);
    print_forward(head);


    return 0;
}