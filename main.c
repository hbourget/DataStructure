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


int main() {

    Queue *queue;
    Stack *stack;
    float ret_pop;

    stack = malloc(sizeof(Stack));
    queue = malloc(sizeof(queue));

    printf("====================STACK DEBUT====================\n");
    

    init_stack(stack);

    push(stack,7);
    push(stack,1723);
    printf("Peek 1723: %.0f\n",peek(stack));
    push(stack,-657);
    printf("Peek -657: %.0f\n",peek(stack));
    
    ret_pop = pop(stack);
    printf("ret_pop: %.0f\n",ret_pop);

    swap(stack);
    printf("Peek 7: %.0f\n",peek(stack));

    dup(stack);
   
    printf("stack stat: %d\n",is_stack_empty(stack));
    printf("popping: %.0f\n",pop(stack));
    printf("popping: %.0f\n",pop(stack));
    printf("popping: %.0f\n",pop(stack));
    printf("stack stat: %d\n",is_stack_empty(stack));

    printf("restacking...\n");

    push(stack, 1111);
    push(stack, 69420);
    push(stack, 3.1415);
    printf("stack stat: %d\n",is_stack_empty(stack));
    printf("reseting...\n");
    stack_clear(stack);
    printf("stack stat: %d\n",is_stack_empty(stack));

    printf("====================STACK FIN====================\n");


    printf("====================QUEUE DEBUT====================\n");

    enqueue(queue, 27);
    enqueue(queue, 157);
    enqueue(queue, 9999);
    enqueue(queue, -3612);
    enqueue(queue, 90);
    
    printf("Dequeue: %.0f\n",dequeue(queue));
    printf("Dequeue: %.0f\n",dequeue(queue));
    printf("Dequeue: %.0f\n",dequeue(queue));
    
    printf("Queue empty : %d\n",is_queue_empty(queue));    


    printf("Front: %.0f\n", front(queue));

    printf("Dequeue: %.0f\n",dequeue(queue));
    printf("Dequeue: %.0f\n",dequeue(queue));

    printf("Queue empty : %d\n",is_queue_empty(queue));

    printf("====================QUEUE FIN====================\n");

    return (EXIT_SUCCESS);
}

