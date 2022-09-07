//
// Created by lizgao on 05/04/22.
//

#include "link_list.h"
#include <stdio.h>
#include <stdlib.h>
struct Node {
    char name[20];
    int age;
    struct Node *next;
};
void printf_link(struct Node *Head) {

    struct Node *p = Head;
    while(p!= NULL) {
        printf("name=%s age=%d \n",p->name,p->age);
        p = p->next;
    };

}
struct Node *append_link(struct Node *Head,char *name, int age) {
    struct Node *New_Node = malloc(sizeof(struct Node));
    New_Node->age= age;
    New_Node->next = NULL;

    for(int i=0; i< 20 && name[i] !=0;i++) {
        New_Node->name[i] =name[i];
    };

    struct Node *p = Head;
    if(Head == NULL) {
      Head = New_Node;
    } else {
        while(p->next != NULL) {
            p= p->next;
        };
        p->next = New_Node;
    };
   return Head;
}

struct Node *insert_begin_link(struct Node *Head,char *name, int age) {
    struct Node *New_Node = malloc(sizeof(struct Node));
    New_Node->age= age;
    New_Node->next = Head;
    for(int i=0;i<20;i++) {
        New_Node->name[i] =name[i];
    };
    return New_Node;
}

struct Node *resort_link2(struct Node *Head) {
    struct Node *p =Head;
    struct Node *new_head=NULL;
    struct Node *temp=NULL;
    if (Head == NULL){
        return NULL;
    }
    while (p!= NULL) {
        temp = p->next;
        p->next = new_head;
        new_head = p;
        p = temp;
    }
    return new_head;
}

struct Node *resort_link(struct Node *Head) {
    struct Node *p =Head;
    struct Node *new_head =NULL;
    while(p != NULL) {
        new_head = insert_begin_link(new_head,p->name, p->age);
        p = p->next;
    };
    return new_head;
}
struct Node *delete_node(struct Node *Head, int age) {
    struct Node *p =Head;
    struct Node *temp=NULL;
    if (Head == NULL) {
        return NULL;
    }
    if (Head->age == age) {
        p =Head->next;
        free(Head);
        return p;
    }
    while(p != NULL & p->next != NULL) {
        if( p->next->age == age) {
            temp = p->next;
             p->next = temp->next;
             free(temp);
             break;
        }
        p = p->next;
    };
    return Head;
}


struct Node *sorted_link(struct Node *Head) {
    struct Node *p;
    struct Node *q=Head;

    while (q != NULL) {
        p =  Head;
        while (p != q && p->next != q && p->next->next != q) {
            struct Node *p2 ;
            struct Node *p3;
            struct Node *p4;
            if(p->next->age > p->next->next->age) {
                p2 = p->next;
                p3 = p->next->next;
                p4 = p->next->next->next;

                p->next = p3;
                p->next->next->next = p2;
                p->next->next = p4;
            }
            p = p->next;
        }
        q = q->next;
    }
    return Head;
}

void link_list_test() {
    struct Node *Head = NULL;
    Head = append_link(Head,"Xiao",25);

    Head = append_link(Head,"Ding",20);
    Head = insert_begin_link(Head, "st1",28);
    Head = append_link(Head, "Gao",36);
    Head = append_link(Head, "Lao",32);
    printf_link(Head);

    //Head = resort_link(Head);
    //Head = resort_link2(Head);
    //printf("resorted link are:\n");
    //printf_link(Head);

    //printf("deleted node Gao:\n");
    //Head = delete_node(Head, 36);
    //printf_link(Head);



    Head = sorted_link(Head);
    printf("sorted link are:\n");
    printf_link(Head);
}
