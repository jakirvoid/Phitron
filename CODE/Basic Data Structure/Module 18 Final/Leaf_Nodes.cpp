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
vector<int>v;
void leaf_node(Node* root){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        v.push_back(root->val);
    }
    leaf_node(root->left);
    leaf_node(root->right);
    
}
int main(){

    Node* root = input();
    leaf_node(root);
    sort(v.begin(),v.end(),greater<int>());
    for(int x : v){
        cout << x <<" ";
    }
    
    

    return 0;
}