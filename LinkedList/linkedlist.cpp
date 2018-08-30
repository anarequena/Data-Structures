// implementation of linked list without head node
#include <iostream>
using namespace std;

struct node {
    int key;
    node *next;
};

class list {
    node *head, *tail;
    public:
        list(){
            head = NULL;
            tail = NULL;
        }

};

// insert a new node at the end of the list
void newNode (int data){
    node *temp = new node;
    temp->key = data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        tail = temp;
        temp = NULL;
    } else {
        tail->next = temp;
        tail = temp;
    }
};

// insert a new node at the beginning of the list
void insertBeginning (int data){
    node *temp = new node;
    temp->key = data;
    temp->next = head;
    head = temp;
};

// insert a new node after a given node of the list
void insertAfter (node *node, int data){
    node *temp = new node;
    temp->key = data;
    temp->next = node->next;
    node->next = temp;
};

// delete the next node after a given node
void delete(node *node){
    node *temp = new node;
    temp = node->next;
    node->next = temp->next;
}
