# include <stdio.h>
# include <stdlib.h>
struct node {
    int c;
    int e;
    struct node* next;
}node;
void createnode(){
    struct node* n = malloc(sizeof(struct node));
    int coeff,exp;
    printf("Enter coeff and exponent:");
    scanf("%d%d",&coeff,&exp);
    n -> c = coeff;
    n -> e = exp;
    n -> next = NULL;
    return n;
}
void createlist(struct node* head,int k){
    int i = 0;
    struct node* newnode = NULL;
    struct node* temp =  head;
    while (i<k){
    newnode = createnode();
    if(head == NULL){
        head = newnode;
        temp = newnode;
    } else{
        temp -> next = newnode;

    }
    }
}
int main(){
    int n;
    struct node* head = NULL;
    printf("Enter n:");
    scanf("%d",&n);

}