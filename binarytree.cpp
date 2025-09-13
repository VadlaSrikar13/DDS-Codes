#include<iostream>
using namespace std;

struct node{
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=right=nullptr;
    }
};

node*insert(node*root,int key){
    if(root==nullptr){
        return new node(key);
    }
    else if(key<root->data){
        root->left=insert(root->left,key);
    }
    else if(key>root->data){
        root->right=insert(root->right,key);
    }
    
        return root;
    }

void inorder(node*root){
    if (root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main(){
    int n;
    cout<<"enter the total no of nodes:";
    cin>>n;
    int*arr=new int[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    node*root=nullptr;
    for(int i=0; i<n; i++){
        root=insert(root,arr[i]);
        
    }
    inorder(root);
}
