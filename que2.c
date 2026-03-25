#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* front = NULL;
struct node* rear = NULL;
void enque(int value){
    struct node* newnode = malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> next = NULL;
    if(rear==NULL){
        front = rear = newnode;
        return ;
    }
    if(front->next == NULL){
        rear = newnode;
        return;
    }
    rear -> next = newnode;
    rear = newnode;
}
void deque(){
    if(rear == NULL){
        printf("List is empty");
    }
    struct node* temp = front;
    front = front -> next;
    free(temp);
}
void display(){
     if(rear == NULL){
        printf("List is empty");
    }
    struct node* temp = front;
    while(temp != NULL){
        printf("%d->",temp -> data);
        temp = temp->next;
    }
}

int main(){
    enque(56);
    display();
    enque(78);
    deque();
    cenque(45);
    cdisplay();
}