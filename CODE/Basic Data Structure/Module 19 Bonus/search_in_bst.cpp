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

Node* input_tree(){
    int val;
    cin >> val;

    Node* root;
    if(val==-1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* f =  q.front();
        q.pop();

        int l,r;
        cin >> l >> r;

        Node* newleft;
        Node* newright;

        if(l!=-1){
            Node* newleft = new Node(l);
            f->left = newleft; 
            q.push(newleft);
        }
        else{
            f->left = NULL;
        }
        if(r!=-1){
            newright = new Node(r);
            f->right = newright;
            q.push(newright);
        }
        else{
            f->right = NULL;
        }
    }
}

bool binary_search(Node* root,int val){
    if(root->val == val){
        return true;
    }
    if(root->val == NULL){
        return false;
    }

    if(root->val<val){
        return binary_search(root->right,val);
    }
    else{
        return binary_search(root->left,val);
    }
}
int main(){

    Node* root = input_tree();
    int n;
    cin >> n;

    cout<<((binary_search(root,n) ? "YES" : "NO"));


    return 0;
}