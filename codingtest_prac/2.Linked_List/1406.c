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

    linked_list->current->prev = newnode;
    if(linked_list->current->prev != NULL){
        linked_list->current->prev->next = newnode;
    }
}

void DelNode(Linked_list* linked_list){
    Node* delNode = linked_list->current->prev;
    delNode->prev->next = linked_list->current;
    linked_list->current->prev = delNode->prev;

    free(delNode); 
}

int main(){
    Linked_list* linked_list = (Linked_list*)malloc(sizeof(Linked_list));
    Linked_list_Init(linked_list);

    char inp[100000];
    scanf("%s",inp);
    printf("%s",inp);

    int i = 0;
    while(inp[i] != '\0'){
        AddNode(inp[i],linked_list);
        i++;
    }

    int N = 0;
    scanf("%d",&N);
    printf("%d",N);
    for(int j =0;j<N;j++){
        char c[4];
        scanf("%s",c);
        while(getchar()!='\n');
        printf("%d",j);
        printf("%s",c);

        if(c[0] == 'L'){
            if(linked_list->current->prev != NULL){
                linked_list->current = linked_list->current->prev;
            }
        }else if(c[0] == 'D'){
            if(linked_list->current->next != NULL){
                linked_list->current = linked_list->current->next;
            }
        }else if(c[0] == 'B'){
            if(linked_list->current->prev != NULL){
                DelNode(linked_list);
            }
        }else if(c[0] == 'P'){
            AddNode(c[1],linked_list);
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