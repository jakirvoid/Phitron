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

void check_duplicate(Node* head){
    for(Node* i=head;i!=NULL;i=i->next){
        for(Node* j=i->next;j!=NULL;j=j->next){
            if(i->val==j->val){
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
}

int main(){
    
    Node* head = new Node(10);
    Node* a = new Node(1);
    Node* b = new Node(10);
    Node* tail = new Node(100);

    head->next = a;
    a->next = b;
    b->next = tail;
    tail->next = NULL;

    check_duplicate(head);

    return 0;
}