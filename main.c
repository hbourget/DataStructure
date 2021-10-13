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


int main(int argc, char** argv) {
    Stack *stack;
    float ret_pop;

    stack = malloc(sizeof(Stack));

    init_stack(stack);

    push(stack,7);
    push(stack,1723);
    push(stack,-657);

    ret_pop = pop(stack);
    ret_pop = pop(stack);
    ret_pop = pop(stack);

    printf("ret_pop: %.0f\n",ret_pop);

    printf("stack stat: %d\n",is_stack_empty(stack));

    return (EXIT_SUCCESS);
}

