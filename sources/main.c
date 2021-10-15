/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aurelio
 */

#include <stdio.h>
#include "tests/asserts.h"
#include <CUnit/CUnit.h>

int main(int argc, char** argv)
{
    CU_initialize_registry();
    CU_pSuite *Suite = CU_add_suite("test", test_init, test_cleanup);
    CU_add_test(Suite, "Test ArrayList", test_arraylist);
    CU_add_test(Suite, "Test Heap", test_heap);
    CU_basic_run_tests();
}
