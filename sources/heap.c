/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdbool.h>
#include "headers/heap.h"

void init_heap(Heap *h)
{
    h->index = 0;
}

bool is_heap_empty(Heap *h)
{
    bool ret = false;
    if(h->index == 0)
    {
        ret = true;
    }
    return ret;
}

float pop_heap(Heap *h)
{

}

//pop the root value
void push_heap(Heap *h, float value)
{

}

float replace_heap(Heap *h, float value)
{

}

// pop root and push a new key.
float peek_heap(Heap *h)
{
    float racine;
    racine = h->data[0];
    return racine;
}

// return root value but dont remove it

void clear_heap(Heap *h)
{
    for (int i = 0; i < h->index; ++i)
    {
        h->data[i] = 0;
    }
    h->index= 0;
}

void heapify(Heap *s, float array[], size_t array_size) //create Heap from array
{

}

void merge(Heap *dest, Heap *src) //merge src into dest
{

}
