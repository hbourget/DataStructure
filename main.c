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

#include <stdlib.h>
#include <assert.h>

#include "stack.h"
#include "array_list.h"
#include "heap.h"

void test_arraylist()
{
    Array_list l;
    int position = 35;
    float valeur = 150;

    init_array_list(&l);
    assert(l.index == 0);

    for(int i = 0; i < 50; i++)
    {
        add(&l, i);
    }

    assert(l.index == 50);
    assert(get_at(&l, position) == position);
    insert_at(&l, position, valeur);
    assert(get_at(&l, position) == valeur);
    remove_at(&l, position);
    assert(get_at(&l, position) != valeur);
    clear_arraylist(&l);
    assert(l.index == 0);
}
/*
 *
 */
int main(int argc, char** argv) {
    test_arraylist();
    return (EXIT_SUCCESS);
}
