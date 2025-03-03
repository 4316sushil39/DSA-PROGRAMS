#include<stdio.h>
#define MAX 100 // to define macros
// suppose an array array size is 100, indexing from 0-99, top1 starts from 0,& top2 
//from 99,if top1=-1,
// and top2 = max i.e 99,empty.
int stack[MAX], top = -1,top2 = MAX;
int isStack1Empty(){
    return(top1 == -1) ? 1 : 0;
}
int isStack2Empty(){
    return(top2 == MAX) ? 1 : 0;
}
int isStack1Full(){
    return(top1 == top2 - 1) ? 1 : 0;
}
int isStack2Full(){
    return(top2 == top1 + 1) ? 1 : 0;
}
void push_stack1(int data){
    if(isStack1Full){
        printf("Stack1 overflow");
        else
        stack[++top1] = data;
        printf("Element added!!!!\n");
    }
}
void push_stack2(int data){
    if(isStack2Full){
        printf("Stack2 overflow");
        else
        stack[--top2] = data; // top2 reverse
        printf("Element added!!!!\n");
    }
}
void pop_stack1(){
    if(is stack1Empty())
        printf("stack1 Underflow!!!!\n");
        else
        printf("%d pop from stack1",[top1--]);
    }
    void pop_stack2(){
        if(is stack2Empty())
            printf("stack2 Underflow!!!!\n");
            elseprintf("%d pop from stack1",[top2--]);
        }
        void peek_stack1(){
            if(is stack1Empty())
            printf("stack is empty!!!!\n");
            else
            printf("%d peek from stack 1",stack[top]);
        }
        void peek_stack2(){
            if(is stack2Empty())
            printf("stack is empty!!!!\n");
            else
            printf("%d peek from stack 2",stack[top]);
        }
        void show_stack1(){
            if(is stack1Empty())
            printf("stack is empty!!!!\n");
            else
            for(int i=0; i<top2-1; i++){
                printf("%d",stack1[top1]);
            }
        }
            void show_stack2(){
                if(is stack2Empty())
                printf("stack is empty!!!!\n");
                else
                for(int i=0; i<top2-1; i++){
                    printf("%d",stack2[top2]);
                }
    
}