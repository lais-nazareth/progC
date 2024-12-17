#include <stdio.h>

struct Node{
    int dado;
    struct Node* next;
};
typedef struct Node node;

int main(void){
    node* A;
    A = NULL;
    node* temp = (node*)malloc(sizeof(node));
    temp->dado = 2;
    temp->next = NULL;
    A = temp;
    
}