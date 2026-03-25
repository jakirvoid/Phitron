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
void check_palindrome(Node* head,Node* tail){
    Node* i = head;
    Node* j = tail;
    bool pdrm = true;
    while(i->prev!=j && i!=j){
        if(i->val!=j->val){
            pdrm = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    cout <<(pdrm ? "YES" : "NO");
}
int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true){
        cin >> val;
        if(val==-1){
            break;
        }
        insert_at_tail(head,tail,val);
    }

    check_palindrome(head,tail);


    return 0;
}