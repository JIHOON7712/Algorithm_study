// https://www.acmicpc.net/problem/10828

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct linked_list{
    int data;
    struct linked_list *node;
}linked_list;

struct stack{
    struct linked_list *top;
    int size;
}stack;

void push(struct stack *stack, int data){
    struct linked_list *new = (struct linked_list *)malloc(sizeof(struct linked_list));
    new->data = data;
    new->node = NULL;
    if(stack->size == 0){
        stack -> top = new;
        new->node = NULL;
    }
    else{
        new->node = stack->top;
        stack->top = new;
    }
    stack->size++;
}

int pop(struct stack *stack){
    if(stack->size == 0){
        return -1;
    }
    else{
        int data = stack->top->data;
        struct linked_list *temp = stack->top;
        if( stack->size == 1){
            stack->top = NULL;
        }
        else{
            stack->top = stack->top->node;
        }
        free(temp);
        stack->size--;
        return data;
    }
} 

int size(struct stack *stack){
    return stack->size;
}

int empty(struct stack *stack){
    if(stack->size == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int top(struct stack *stack){
    if(stack->size == 0){
        return -1;
    }
    else{
        return stack->top->data;
    }
}

int main(){
    struct stack stack = {NULL, 0};
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        char command[6];
        scanf("%s", command);
        if(strcmp(command, "push") == 0){
            int data;
            scanf("%d", &data);
            push(&stack, data);
        }
        else if(strcmp(command, "pop") == 0){
            printf("%d\n", pop(&stack));
        }
        else if(strcmp(command, "size") == 0){
            printf("%d\n", size(&stack));
        }
        else if(strcmp(command, "empty") == 0){
            printf("%d\n", empty(&stack));
        }
        else if(strcmp(command, "top") == 0){
            printf("%d\n", top(&stack));
        }
    }
}