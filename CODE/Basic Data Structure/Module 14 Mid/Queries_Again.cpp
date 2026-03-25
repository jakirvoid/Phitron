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

Node* insert_at_any(Node* &head,Node* &tail,int idx,int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        if(idx!=0){
            cout << "Invalid"<<endl;
            return NULL;
        }
        head = newnode;
        tail = newnode;
        return head;
    }
    if(idx==0){
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
        return head;
    }
    Node* tmp = head;
    for(int i=0;i<idx-1;i++){
        tmp = tmp->next;
        if(tmp == NULL){
            cout << "Invalid"<<endl;
            return NULL;
        }
    }
    if(tmp->next==NULL){
        tmp->next = newnode;
        newnode->prev = tmp;
        tail = newnode;
        return head;
    }
    tmp->next->prev = newnode;
    newnode->next = tmp->next;
    newnode->prev = tmp;
    tmp->next = newnode;  

    return head;
     
}

void print_l(Node* tmp){
    if(tmp==NULL){
        return;
    }
    cout << tmp->val <<" ";
    print_l(tmp->next);
}

void print_r(Node* tmp){
    if(tmp==NULL){
        return;
    }
    cout << tmp->val <<" ";
    print_r(tmp->prev);
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int t;
    cin >> t;
    while(t--){
        int idx,val;
        cin >> idx >> val;
        Node* a = insert_at_any(head,tail,idx,val);
        if(a==NULL) continue;
        cout<<"L -> ";
        print_l(head);
        cout<<endl;
        cout<<"R -> ";
        print_r(tail);
        cout<<endl;


    }


    return 0;
}