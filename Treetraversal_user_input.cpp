#include <iostream>
using namespace std;

struct node{
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
node*insert(node*root,int arr[],int i,int n){
    if(i<n){
        node*temp=new node(arr[i]);
        root = temp;
        root->left=insert(root->left,arr,2*i+1,n);
        root->right=insert(root->right,arr,2*i+2,n);
    }
    return root;
}

void inorder(node*root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}



int main() {
    int n;
    cout<<"enter to size of array:";
    cin>>n;
    int*arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    node*root=insert(nullptr,arr,0,n);
    inorder(root);
}
