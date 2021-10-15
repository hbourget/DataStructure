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
#include <CUnit/CUnit.h>

#include "stack.h"
#include "queue.h"

void ass_stack(void){

    Stack *stack;
    stack = malloc(sizeof(Stack));

    init_stack(stack);
    CU_ASSERT(stack->index ==0);
    CU_ASSERT(is_stack_empty(stack)==1);

    push(stack,7);
    CU_ASSERT(peek(stack) == 7);
    push(stack,1723);
    CU_ASSERT(peek(stack) == 1723);
    push(stack,-657);
    CU_ASSERT(peek(stack) == -657);
    CU_ASSERT(stack->index == 3);

    CU_ASSERT(pop(stack) == -657);    

    swap(stack);
    CU_ASSERT(peek(stack) == 7);

    dup(stack);
    CU_ASSERT(pop(stack) == 7);
    CU_ASSERT(pop(stack) == 7);
    CU_ASSERT(is_stack_empty(stack) == 0);
    CU_ASSERT(pop(stack) == 1723);
    CU_ASSERT(is_stack_empty(stack) == 1);

    free(stack);
    
}

void ass_queue(){
    Queue *queue;       
    queue = malloc(sizeof(Queue));

    init_queue(queue);
    CU_ASSERT(queue->index == 0);

    enqueue(queue, 27);
    CU_ASSERT(front(queue)==27);
    enqueue(queue, 157);
    CU_ASSERT(front(queue)==27);
    enqueue(queue, 9999);
    CU_ASSERT(is_queue_empty(queue)==0);

    CU_ASSERT(dequeue(queue)==27);
    CU_ASSERT(dequeue(queue)==157);
    CU_ASSERT(dequeue(queue)==9999);
    CU_ASSERT(is_queue_empty(queue)==1);
    
    free(queue);

}

int test_cleanup(void){
    return 0;
}

int test_init(void){
    return 0;
}

int main() {

    CU_initialize_registry();
    CU_pSuite *Suite = CU_add_suite("test", test_init, test_cleanup);
    CU_add_test(Suite, "test stack", ass_stack);
    CU_add_test(Suite, "test queue", ass_queue);
    CU_basic_run_tests();


    return (EXIT_SUCCESS);
}

