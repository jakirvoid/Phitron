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
void insert_at_head(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}
void delete_at_any_postion(Node* &head,Node* &tail,int idx){
    if(head==NULL){
        return;
    }
    if(idx==0){
        Node* dn = head;
        head = head->next;
        if(head==NULL){
            tail = NULL;
        }
        delete dn;
        return;
    }
    Node* tmp = head;
    for(int i=0;i<idx-1;i++){
        if(tmp->next==NULL){
            break;// return  
        }
        tmp = tmp->next;
    }
    
    if(tmp->next==NULL){
        return;
    }
    if(tmp->next==tail){
        tail = tmp;
    }  
    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
    
    
}
void print_linked_list(Node* tmp){
    if(tmp==NULL){
        return;
    }
    cout << tmp->val <<" ";
    print_linked_list(tmp->next);
     
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;
    
    while(q--){
        int x,val;
        cin >> x >> val;

        if(x==0){
            insert_at_head(head,tail,val);
        }
        else if(x==1){
            insert_at_tail(head,tail,val);
        }
        else if(x==2){
            delete_at_any_postion(head,tail,val);
        }
        print_linked_list(head);
        cout << endl;
    }

    return 0;
}