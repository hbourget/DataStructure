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


int main() {
    Stack *stack;
    float ret_pop;

    stack = malloc(sizeof(Stack));

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

    

    return (EXIT_SUCCESS);
}

