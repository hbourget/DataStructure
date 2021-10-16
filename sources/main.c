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

#include "../headers/stack.h"
#include "../headers/queue.h"
#include "../tests/tests.h"



int main() {

    CU_initialize_registry();
    CU_pSuite *Suite = CU_add_suite("test", test_init, test_cleanup);
    CU_add_test(Suite, "test stack", ass_stack);
    CU_add_test(Suite, "test queue", ass_queue);
    CU_basic_run_tests();


    return (EXIT_SUCCESS);
}

