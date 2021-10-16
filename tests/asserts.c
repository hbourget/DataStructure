//
// Created by h.bourget on 15/10/2021.
//

#include <stdbool.h>
#include <stdlib.h>

#include "headers/array_list.h"
#include "headers/heap.h"
#include <CUnit/CUnit.h>

void test_arraylist(void)
{
    Array_list *l = malloc(sizeof(Array_list));

    int position = 35;
    float valeur = 150;

    init_array_list(l);
    CU_ASSERT(l->index == 0);

    for(int i = 0; i < 50; i++)
    {
        add(l, i);
    }

    CU_ASSERT(l->index == 50);
    CU_ASSERT(get_at(l, position) == position);

    insert_at(l, position, valeur);
    CU_ASSERT(get_at(l, position) == valeur);

    remove_at(l, position);
    CU_ASSERT(get_at(l, position) != valeur);

    clear_arraylist(l);
    CU_ASSERT(l->index == 0);
}

void test_heap()
{
    Heap *h = malloc(sizeof(Heap));

    init_heap(h);
    CU_ASSERT(is_heap_empty(h) == true);

    h->data[0] = 1;
    CU_ASSERT(peek_heap(h) == 1);

    clear_heap(h);
    CU_ASSERT(h->index == 0);
}