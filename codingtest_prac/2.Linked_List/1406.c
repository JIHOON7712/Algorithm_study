#include<stdio.h>
#include<stdlib.h>

#define Data char

typedef struct Node{
    Data data;
    struct Node* prev;
    struct Node* next;
}Node;

typedef struct Linked_list{
    Node* current;
    Node* tail;
}Linked_list;

void Linked_list_Init(Linked_list* linked_list){
    linked_list->tail = (Node*)malloc(sizeof(Node));

    linked_list->tail->next = NULL;
    linked_list->tail->prev = NULL;
    linked_list->tail->data = '\0';

    linked_list->current = linked_list->tail;
}

void AddNode(Data data,Linked_list* linked_list){
    Node* newnode = (Node*)malloc(sizeof(Node));

    newnode->data = data;
    newnode->prev = linked_list->current->prev;
    newnode->next = linked_list->current;
    if(newnode->prev != NULL){
        newnode->prev->next = newnode;
    }
    newnode->next->prev = newnode;
    
    
    linked_list->current->prev = newnode;
   
}

void DelNode(Linked_list* linked_list){
    if(linked_list->current->prev != NULL){
        Node* delNode = linked_list->current->prev;
        if(delNode->prev != NULL){
            delNode->prev->next = delNode->next;
            delNode->next->prev = delNode->prev;
        }
        free(delNode); 
    }
}

int main(){
    Linked_list* linked_list = (Linked_list*)malloc(sizeof(Linked_list));
    Linked_list_Init(linked_list);

    char c;
    while ((c = getchar()) != '\n'){
		AddNode(c,linked_list);
    }

    int N = 0;
    scanf("%d\n",&N);

    for(int j =0;j<N;j++){
        scanf("%c ",&c);

        if(c == 'L'){
            if(linked_list->current->prev != NULL){
                linked_list->current = linked_list->current->prev;
            }
        }else if(c == 'D'){
            if(linked_list->current->next != NULL){
                linked_list->current = linked_list->current->next;
            }
        }else if(c == 'B'){
            if(linked_list->current->prev != NULL){
                DelNode(linked_list);
            }
        }else if(c == 'P'){
            char inp;
            scanf(" %c",&inp);
            AddNode(inp,linked_list);
        }
    }

    while(linked_list->current->prev != NULL){
        linked_list->current = linked_list->current->prev;
    }
    while(linked_list->current->next != NULL){
        printf("%c",linked_list->current->data);
        linked_list->current = linked_list->current->next;
    }
    printf("\n");

}