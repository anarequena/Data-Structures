// implementation of binary tree
#include <iostream>
using namespace std;

struct node {
    int key;
    node *right, *left; //*father creates a pointer to the father of the node
} node, *tree;

tree root;

// visits the root, then all the left subtree in preOrder and then the right subtree in preOrder
void preOrder (tree n){
    if(n){
        // visit node
        printf("%d", n->key);
        preOrder(p->left);
        preOrder(p->right);

        /* or without tail recursion
        while(n){
            visit(n);
            preOrder(p->left);
            p = p->right;
        } */
    }
}

// run the left subtree in postOrder, run the right subtree in postOrder then visit the root
void postOrder (tree n){
    if(n){
        postOrder(n->left);
        postOrder(n->right);
        printf("%d", n->key);
    }
}


void inOrder (tree n){
    
}
