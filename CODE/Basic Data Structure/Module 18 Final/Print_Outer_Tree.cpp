#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* right;
    Node* left;

    Node(int val){
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    }
};

Node* input(){
    Node* root;
    int v;
    cin >> v;
    if(v!=-1){
        root = new Node(v);
    } 
    queue<Node*> q;
    if(root){
        q.push(root);
    }
    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        
        if(l!=-1){
            Node* newleft = new Node(l);
            p->left = newleft;
            q.push(newleft);
        }
        else{
            p->left = NULL;
        }
        if(r!=-1){
            Node* newright = new Node(r);
            p->right = newright;
            q.push(newright);
        }
        else{
            p->right = NULL;
        }
    }
    return root;
}

vector<int> v;
void left_outer(Node* root,vector<int> &v){
    if(root == NULL) return;

    if(root->left){
        left_outer(root->left, v);
    }
    else if(root->right){
        left_outer(root->right, v);    
    }
    v.push_back(root->val);
}

void right_outer(Node* root,vector<int> &v){
    if(root == NULL) return;

    v.push_back(root->val);
    if(root->right){
        right_outer(root->right, v);
    }
    else if(root->left){    
        right_outer(root->left, v);
    }
}
int main(){

    Node* root = input();

    if(root->left){
        left_outer(root->left,v);
    }
    v.push_back(root->val);
    if(root->right){
        right_outer(root->right,v);
    }
    for(int x : v){
        cout << x << " ";
    }



    
    return 0;
}