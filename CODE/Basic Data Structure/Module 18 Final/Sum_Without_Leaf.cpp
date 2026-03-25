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
    int val;
    cin >> val;
    Node* root = new Node(val);
    queue<Node*> q;
    if(root){
        q.push(root);
    }
    while(!q.empty()){
        Node* p = q.front();
        q.pop();
        
        int l, r;
        cin >> l >> r;

        Node* newLeft;
        Node* newRight;

        if(l!=-1){
            newLeft = new Node(l);
            p->left = newLeft;
            q.push(newLeft);
        }
        else{
            p->left = NULL;
        }
        
        if(r!=-1){
            newRight = new Node(r);
            p->right = newRight;
            q.push(newRight);
        }
        else{
            p->right = NULL;
        }
    }
    return root;
}

int sum(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 0;
    }
    int sm = 0;
    int l = sum(root->left);
    int r = sum(root->right);
    return  root->val + l + r;
    
}
int main(){

    Node* root = input();
    int s = sum(root);
    cout << s;

    return 0;
}