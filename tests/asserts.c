//
// Created by h.bourget on 15/10/2021.
//

#include <assert.h>
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
    assert(l->index == 0);
    CU_ASSERT(l->index == 0);

    for(int i = 0; i < 50; i++)
    {
        add(l, i);
    }

    assert(l->index == 50);
    assert(get_at(l, position) == position);

    insert_at(l, position, valeur);
    assert(get_at(l, position) == valeur);

    remove_at(l, position);
    assert(get_at(l, position) != valeur);

    clear_arraylist(l);
    assert(l->index == 0);
}

void test_heap()
{
    Heap *h = malloc(sizeof(Heap));

    init_heap(h);
    assert(is_heap_empty(h) == true);

    h->data[0] = 1;
    assert(peek_heap(h) == 1);

    clear_heap(h);
    assert(h->index == 0);
}