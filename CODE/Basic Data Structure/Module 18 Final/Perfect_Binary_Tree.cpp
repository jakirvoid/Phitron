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

int node_count(Node* root){
    if(root == NULL){
        return 0;
    }
    int l = node_count(root->left);
    int r = node_count(root->right);
    return l+r+1;  
}

int tree_hight(Node* root){
    if(root == NULL){
        return 0;
    }
    int l = tree_hight(root->left);
    int r = tree_hight(root->right);
    return max(l,r)+1;
}
int main(){

    Node* root = input();
    int n = node_count(root);
    int h = tree_hight(root);

    int x = pow(2,h) - 1;
    cout << ((x==n) ? "YES" : "NO");
    
    return 0;
}