#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void size_of_linked_list(Node* head){
    Node* tmp = head;

    int flg=0;
    while(tmp!=NULL){
        flg++;
        tmp = tmp->next;
    }
    cout << flg << endl;
}

int main(){
    
    Node* head = new Node(10);
    Node* a = new Node(10);
    Node* b = new Node(10);
    Node* tail = new Node(10);

    head->next = a;
    a->next = b;
    b->next = tail;
    tail->next = NULL;

    size_of_linked_list(head);





    return 0;
}