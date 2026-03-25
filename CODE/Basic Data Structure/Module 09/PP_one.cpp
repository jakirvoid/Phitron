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

void print_linked_list(Node* tmp){
    if(tmp==NULL){
        return;
    }
    cout << tmp->val <<" ";
    print_linked_list(tmp->next);
     
}
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode; 
}
int main(){

    Node* head_one = NULL;
    Node* tail_one = NULL;

    Node* head_two = NULL;
    Node* tail_two = NULL;

    int val;
    while(true){
        cin >> val;
        if(val==-1){
            break;
        }
        insert_at_tail(head_one,tail_one,val);
    }
    int val1;
    while(true){
        cin >> val1;
        if(val1==-1){
            break;
        }
        insert_at_tail(head_two,tail_two,val1);
    }

    Node* i = head_one;
    Node* j = head_two;

    int flg = 1;
    while(i->next!=NULL && j->next!=NULL){
        if(i->val!=j->val){
            flg = 0;
            break;
        }
        i = i->next;
        j = j->next;
    }

    if(i!=NULL || j!=NULL){
        flg = 0;
    }

    cout << (flg ? "YES" : "NO");


    return 0;
}