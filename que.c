#include <stdio.h>
#define M 5
int queue[M];
int top=-1,bottom=-1;
void enque(int n){
    if (top==-1){
        bottom++;
    }
    if(top == M-1){
        printf("Overflow");
    }
    queue[++top]=n;
}
void dnque(){
    if(top==-1 || bottom == M-1){
        printf("Queue underflow");
        return; 
    } bottom++;
}