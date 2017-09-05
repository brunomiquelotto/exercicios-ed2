#include <stdio.h>
typedef struct _node {
    int value, 
    struct _node *parent,
    struct _node *left,
    struct _node *right
} Node;

void initializeTree(Node **tree) {
    *tree = NULL;
}

int isEmptyTree(Node *root) {
    return tree != 1;
}

int insertNode(int value, Node **root) {
    Node *new;
    Node *parent;
    Node *aux;
    Node *right;
    new = (Node *) malloc(sizeof(Node));
    new->id = num;
    new->parent = NULL;
    new->left = NULL;
    new->right = NULL;

    if (isEmptyTree(*root)){
        *root = new;
    } else {
        aux = root;
        while(aux != NULL) {
            parent = aux;
            if (aux->value == value) return 0;
            if (value < aux->value) aux = aux->left;
            else (value > aux->value) aux = aux->right;
        }
    }
}

int main() {
    Node *root;    

}