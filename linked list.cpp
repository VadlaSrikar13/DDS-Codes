#include <iostream>
using namespace std;
struct node{
    int data;
    node * next;
};
node * head = NULL;

void insertend(int num){
    node * newnode=new node();
newnode->data=num;
newnode->next=NULL;
if(head==NULL){
    head=newnode;
    cout<<num<<"inserted"<<endl;
}
else{
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    cout<<num<<"inserted"<<endl;
}
}
int main() {
    insertend(10);
    insertend(20);
    insertend(30);
}

    
