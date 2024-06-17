#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node* L;
    struct node* R;    
} node;

//FUNÇÃO DE INSERÇÃO
void insert(struct node** root, int num){
    node* leaf = (node*) malloc(sizeof(node));
    leaf->value = num;
    leaf->R = NULL;
    leaf->L = NULL;

    if((*root) == NULL){
        (*root) = leaf;              
    } else{
        node* aux = (*root);
        node* previous = NULL;
        while (aux != NULL){
            previous = aux;
            if (num <= aux->value){
                aux = aux->L;
            } else{
                aux = aux->R;
            }
        }
        if(num <= previous->value){
            previous->L = leaf;            
        } else{
            previous->R =leaf;
        }
    }
}

void see_tree(node* root){
    if (root != NULL){
        see_tree(root->L);
        printf("%d ", root->value);
        see_tree(root->R);
    }    
}

int main(){
    node* root = NULL;
    insert(&root, 10);
    insert(&root, 5);
    see_tree(root);
    return 0;
}