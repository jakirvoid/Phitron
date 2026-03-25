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

class Node_two{
    public:
    int val;
    Node_two* next;

    Node_two(int val){
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

int check_size(Node* head){
    Node* tmp = head;
    int cnt=0;
    while(tmp->next!=NULL){
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
}

int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;

    
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;
    while(true){
        cin >> val;
        if(val==-1){
            break;
        }
        insert_at_tail(head1,tail1,val);
    }

    int val2;
    while(true){
        cin >> val2;
        if(val2==-1){
            break;
        }
        insert_at_tail(head2,tail2,val2);
    }

    int s1 = check_size(head1);
    int s2 = check_size(head2);

    cout << ((s1==s2) ? "YES" : "NO");


    return 0;
}