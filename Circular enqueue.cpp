#include <iostream>
using namespace std;
#define size 4
int CQ[size];
int front=-1;
int rear=-1;
bool isFull(){
    return(rear+1)%size==front;
}
bool isEmpty(){
    return front==-1;
}
void enqueue(int num){
    if(isFull()){
        cout<<"Queue is full can not insert"<<endl;
        
    }
       else if(isEmpty()){
            front=rear=0;
            cout<<num<<"insert"<<endl;
    }
    else{
        rear=(rear+1)%size;
        CQ[rear]=num;
        cout<<num<<"insert"<<endl;
    }
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); 
}
