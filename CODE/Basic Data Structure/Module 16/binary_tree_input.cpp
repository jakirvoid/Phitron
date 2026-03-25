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

Node* binary_input(){
    int val;
    cin >> val;

    
    Node* root;
    if(val == -1) 
        root = NULL;
    else
        root = new Node(val);

    queue<Node*> q;
    if(root != NULL) q.push(root);

    while(!q.empty()){
        Node* f = q.front();
        q.pop();
        
        int l,r;
        cin >> l >> r;
        
        Node* newLeft, *newRight;
        if(l == -1){
            newLeft = NULL;
        }
        else{
            newLeft = new Node(l);
        }
        if(r == -1){
            newRight = NULL;
        }
        else{
            newRight = new Node(r);
        }                   
        f->left = newLeft;
        f->right = newRight;


        if(f->left != NULL)
            q.push(f->left);
        
        if(f->right)
            q.push(f->right); 
    }
    return root;
}
void level_order(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();
        cout << f->val <<" ";
        if(f->left != NULL)
            q.push(f->left);
        
        if(f->right)
            q.push(f->right); 
    }
}


int main(){

    Node* root = binary_input();
    level_order(root);
    

    return 0;
}