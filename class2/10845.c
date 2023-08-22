// https://www.acmicpc.net/problem/10845

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct linked_list{
    int data;
    struct linked_list *next;
    struct linked_list *prev;
}linked_list;

struct queue{
    struct linked_list *front;
    struct linked_list *back;
    int size;
}queue;

void push(struct queue *queue, int data){
    struct linked_list *new = (struct linked_list *)malloc(sizeof(struct linked_list));
    new->data = data;
    new->next = NULL;
    new->prev = NULL;
    if(queue->size == 0){
        queue->front = new;
        queue->back = new;
    }
    else{
        queue->back->next = new;
        new->prev = queue->back;
        queue->back = new;
    }
    queue->size++;
}

int pop(struct queue *queue){
    if(queue->size == 0){
        return -1;
    }
    else{
        int data = queue->front->data;
        struct linked_list *temp = queue->front;
        if( queue->size == 1){
            queue->front = NULL;
            queue->back = NULL;
        }
        else{
            queue->front->next->prev = NULL;
            queue->front = queue->front->next;
        }
        free(temp);
        queue->size--;
        return data;
    }
}

int size(struct queue *queue){
    return queue->size;
}

int empty(struct queue *queue){
    if(queue->size == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int front(struct queue *queue){
    if(queue->size == 0){
        return -1;
    }
    else{
        return queue->front->data;
    }
}


int back(struct queue *queue){
    if(queue->size == 0){
        return -1;
    }
    else{
        return queue->back->data;
    }
}

int main(){
    struct queue queue = {NULL, 0};
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        char command[6];
        scanf("%s", command);
        if(strcmp(command, "push") == 0){
            int data;
            scanf("%d", &data);
            push(&queue, data);
        }
        else if(strcmp(command, "pop") == 0){
            printf("%d\n", pop(&queue));
        }
        else if(strcmp(command, "size") == 0){
            printf("%d\n", size(&queue));
        }
        else if(strcmp(command, "empty") == 0){
            printf("%d\n", empty(&queue));
        }
        else if(strcmp(command, "front") == 0){
            printf("%d\n", front(&queue));
        }
        else if(strcmp(command, "back") == 0){
            printf("%d\n", back(&queue));
        }
    }
}