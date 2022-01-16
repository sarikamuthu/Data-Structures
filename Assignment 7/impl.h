#include"AVL.h"
#include<stdio.h>
#include<stdlib.h>
int getHeight(struct AVL *n){
    if(n==NULL)
        return 0;
    return n->height;
}
 
struct AVL *createNode(int DATA){
    struct AVL* node = (struct AVL *) malloc(sizeof(struct AVL));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}
 
int max (int a, int b){
    return (a>b)?a:b;
}
 
int getBalanceFactor(struct AVL * n){
    if(n==NULL){
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}
 
struct AVL* rightRotate(struct Node* y){
    struct AVL* x = y->left;
    struct AVL* Z = x->right;
 
    x->right = y;
    y->left = Z;
 
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
 
    return x;
}
 
struct AVL* leftRotate(struct AVL* x){
    struct AVL* y = x->right;
    struct AVL* Z = y->left;
 
    y->left = x;
    x->right = Z;
 
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
 
    return y;
}
 
struct AVL *insert(struct AVL* node, int data){
    if (node == NULL)
        return  createNode(data);
 
    if (key < node->key)
        node->left  = insert(node->left, data);
    else if (key > node->key)
        node->right = insert(node->right, data);
 
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf = getBalanceFactor(node);
 
    // Left Left Case
        if(bf>1 && data < node->left->key){
            return rightRotate(node);
        }
    // Right Right Case
        if(bf<-1 && data > node->right->key){
            return leftRotate(node);
        }
    // Left Right Case
    if(bf>1 && data > node->left->key){
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
    // Right Left Case
    if(bf<-1 && data < node->right->key){
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    return node;
}
 
void InOrder(struct AVL *root)
{
    if(root != NULL)
    { 
        InOrder(root->left);
        printf("%d ", root->key);
        InOrder(root->right);
    }
}
 
 void preOrder(struct AVL *root)
{
    if(root != NULL)
    {
        printf("%d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}
