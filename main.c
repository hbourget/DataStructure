/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aurelio
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <assert.h>

#include "stack.h"
#include "queue.h"

void ass_stack(){

    Stack *stack;
    stack = malloc(sizeof(Stack));

    init_stack(stack);
    assert(stack->index ==0);
    assert(is_stack_empty(stack)==1);

    push(stack,7);
    assert(peek(stack) == 6);
    push(stack,1723);
    assert(peek(stack) == 1723);
    push(stack,-657);
    assert(peek(stack) == -657);
    assert(stack->index == 3);

    assert(pop(stack) == -657);

    swap(stack);
    assert(peek(stack) == 7);
    assert(pop(stack) == 7);
    assert(is_stack_empty(stack) == 0);
    assert(pop(stack) == 1723);
    assert(is_stack_empty(stack) == 1);
    
}

void ass_queue(){
    Queue *queue;       
    queue = malloc(sizeof(Queue));

    init_queue(queue);
    assert(queue->index == 0);

    enqueue(queue, 27);
    assert(front(queue)==27);
    enqueue(queue, 157);
    assert(front(queue)==27);
    enqueue(queue, 9999);
    assert(is_queue_empty(queue)==0);

    assert(dequeue(queue)==27);
    assert(dequeue(queue)==157);
    assert(dequeue(queue)==9999);
    assert(is_queue_empty(queue)==1);

}

int main() {

    printf("====================STACK DEBUT====================\n");
    
    ass_stack();

    printf("Test Stack réussi\n");

    printf("====================STACK FIN====================\n");

    printf("====================QUEUE DEBUT====================\n");

   ass_queue();
   printf("Test Queueu réussi\n");

    printf("====================QUEUE FIN====================\n");

    return (EXIT_SUCCESS);
}

