#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
}Node_t;

static Node_t  *front = NULL;
static Node_t  *rear = NULL;

int init_queue(int data){
    int ret = -1;
    if(front == NULL){
        Node_t *new_node = (Node_t*)malloc(sizeof(Node_t));
        new_node->data = data;
        new_node->next = NULL;
        front = new_node;
        rear = new_node;
        ret = 0;
    } else{
        printf("queue is already created\n");
    }
    return ret;
}

int enqueue(int data){
    int ret = -1;
    if((front==NULL) && (rear == NULL)){
        printf("queue is empty ot not created\n");
    }
    else{
        //push data to the rear end of queue
        Node_t* new_node = (Node_t *)malloc(sizeof(Node_t));
        new_node->data = data;
        new_node->next = NULL;
        rear->next = new_node;

        // update new rear;
        rear = new_node;
        ret = 0;
    }
    return ret;
}

int dequeue(){
    
    int result = 0;
    
    //if queue empty return -1
    if(front==NULL){
        printf("queue is empty\n");
        return -1;
    }
    
    //fetch data from front end
    result = front->data;

    //update new front
    Node_t* front_bkp = front;
    front= front->next;

    //delete the node
    free(front_bkp);

    return result;
}

void display_queue(){
    for(Node_t *n = front; n != NULL; n=n->next){
        printf("%d <- ",n->data);
    }
    printf("\n");
}