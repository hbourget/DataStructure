#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <CUnit/CUnit.h>

#include "../headers/stack.h"
#include "../headers/queue.h"
#include "../tests/asserts.h"



int main() {

    CU_initialize_registry();
    CU_pSuite *Suite = CU_add_suite("test", test_init, test_cleanup);
    CU_add_test(Suite, "test stack", ass_stack);
    CU_add_test(Suite, "test queue", ass_queue);
    CU_add_test(Suite, "test array_list", test_arraylist);
    CU_add_test(Suite, "test tas", test_heap);
    CU_basic_run_tests();


    return (EXIT_SUCCESS);
}

