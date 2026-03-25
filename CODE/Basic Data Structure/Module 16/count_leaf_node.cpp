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
    queue<Node*> q;

    int val;
    cin >> val;
    if(val==-1){
        root = NULL;
    }
    else{
        root = new Node(val);
    }
    if(root!= NULL)
        q.push(root);

    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        int l,r;
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

void output_level_order(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        cout << f->val <<" ";

        if(f->left!=NULL){
            q.push(f->left);
        }
        if(f->right!=NULL){
            q.push(f->right);
        }
        
    }
}

int count_leaf_nodes(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);
    return l + r;
        

}   

int main(){

    Node* root = input();
    output_level_order(root);
    int c = count_leaf_nodes(root);

    cout <<endl << c;


    return 0;
}