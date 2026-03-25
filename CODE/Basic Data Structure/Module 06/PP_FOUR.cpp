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
    }
    
    tail->next = newnode;
    tail = newnode; 
}
void print_linked_list(Node* tmp){
    if(tmp==NULL){
        return;
    }
    cout << tmp->val <<" ";
    print_linked_list(tmp->next);
     
}

bool insert_at_any_position(Node* &head,int idx,int val){
    Node* newNode = new Node(val);
    if(idx==0){
        newNode->next = head;
        head = newNode;
        return true;
    }

    Node* tmp = head;
    for(int i=1;i<idx;i++){
        tmp = tmp->next;
    }
    if(tmp==NULL){
            return false;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    return true;
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
    
    int q;
    cin >> q;

    while(q--){
        int idx,val;
        cin >> idx >> val;

        bool c = insert_at_any_position(head,idx,val);
        if(c>0){
            print_linked_list(head);
            cout<<endl;
        }
        else{
            cout<<"Invalid"<<endl;
        }
        
    }


    return 0;
}