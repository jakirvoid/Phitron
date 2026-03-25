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

int max_hight(Node* root){
    if(!root){ 
        return 0;
    }
    int l = max_hight(root->left);
    int r = max_hight(root->right);

    return max(l,r)+1;
}
void level(Node* root,int x){
    
    if(x > max_hight(root)-1){
        cout <<"Invalid";
        return;
    }
    queue<pair<Node*,int>> q;
    if(root) q.push({root,0});

    while(!q.empty()){
        pair<Node*,int> p = q.front();
        q.pop();
        Node* nd = p.first;
        int lv = p.second;

        if(x == lv){
            cout << nd->val <<" ";
        }


        if(nd->left){
            q.push({nd->left,lv+1});
        }
        if(nd->right){
            q.push({nd->right,lv+1});
        }    
    }
}

int main(){

    Node* root = input();
    int x;
    cin >> x;
    level(root,x);
    
    return 0;
}