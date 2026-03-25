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
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    
    tail->next = newnode;
    tail = newnode; 
}

int diff(Node* head){
    if(head->next==NULL)   {
        return 0;
    }
    Node* tmp = head;
    int mx = INT_MIN;
    int mn = INT_MAX;
    while(tmp!=NULL){
        mx = max(mx,tmp->val);
        mn = min(mn,tmp->val);
       tmp = tmp->next;
    }
    return mx-mn;  
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
    int d = diff(head);

    cout <<((d>0) ? d : 0);



    return 0;
}