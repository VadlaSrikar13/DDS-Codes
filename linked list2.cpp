#include <iostream>
using namespace std;
struct node{
    int data;
    node * next;
};
node * head = NULL;

void insertEnd(int num){
    node * newnode=new node();
newnode->data=num;
newnode->next=head;
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

void inserStart(int num){
}
int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    //insertStart(50);
}
