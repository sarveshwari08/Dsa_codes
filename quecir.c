#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* front = NULL;
struct node* rear = NULL;
void cenque(int value){
    rear -> next = front;
    struct node* newnode = malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> next = newnode;
    if(rear == NULL){
        front = rear = newnode;
    }
    newnode -> next = front;
    rear -> next = newnode;
    front = newnode;
}
void cdeque(){
     if(rear == NULL){
        printf("List is empty");
    }
    rear -> next = front;
    struct node* temp = front;
    rear = front -> next -> next;
    free(temp);
}
void cdisplay(){
    if(rear == NULL){
        printf("Circular linked list is empty");
        return;
    }
    struct node* temp = front;
    while(temp -> next != front){
        printf("%d ",temp->data);
        temp = temp -> next;
    }
}
int main(){
    
}