#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    string val;
    Node* next;
    Node* prev;

    Node(string val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,string val){
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

    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        string s;
        cin >> s;
        if(s=="end"){
            break;
        }
        insert_at_tail(head,tail,s);
    }

    int t;
    cin >> t;

    Node* c = head;
    while(t--){
        string cmd;
        cin >> cmd;
        if(cmd=="visit"){
            string b;
            cin >> b;

            int flg = 0;
            Node* tmp = head;
            while(tmp!=NULL){
                if(tmp->val==b){
                    flg = 1;
                    c = tmp;
                    cout << b<<endl;
                    break;
                }
                tmp = tmp->next;
            } 
            if(flg==0)
                cout <<"Not Available"<<endl;
        }
        else if(cmd=="next"){
            int flg = 0;
            if(c->next!=NULL){
                c = c->next;
                flg = 1;
            }
            cout <<(flg ? c->val : "Not Available")<<endl;
        }
        else if(cmd=="prev"){
            int flg = 0;
            if(c->prev!=NULL){
                c = c->prev;
                flg = 1;
            }
            cout <<(flg ? c->val : "Not Available")<<endl;
        }
    }


    return 0;
}