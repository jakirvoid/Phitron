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

void check_order(Node* head){
    Node* tmp = head;
    int flg=0,cnt=0;
    // for(Node* i=head;i->next!=NULL;i=i->next){
    //     cnt++;
    //     if(i->val<i->next->val){
    //         flg++;
    //     }
    // }
    while(tmp->next!=NULL){
        cnt++;
        if(tmp->val<tmp->next->val){
            flg++;
        }
        tmp = tmp->next;
    }
    cout << ((flg==cnt) ? "YES" : "NO");
}

int main(){
    
    Node* head = new Node(21);
    Node* a = new Node(11);
    Node* b = new Node(101);
    Node* tail = new Node(1000);

    head->next = a;
    a->next = b;
    b->next = tail;
    tail->next = NULL;

    check_order(head);

    return 0;
}