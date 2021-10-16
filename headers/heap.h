/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   heap.h
 * Author: aurelio
 *
 */

#include <stdbool.h>
#include <string.h>

#ifndef HEAP_H
#define HEAP_H


#define HEAP_MAX_SIZE 100

typedef struct {
    float data[HEAP_MAX_SIZE];
    int index;
} Heap;

#endif /* HEAP_H */

/**
 * @brief Initialise le tas
 *
 * @param h Pointeur vers le tas
 */
void init_heap(Heap *h);

/**
 * @brief Vérifie si le tableau est vide
 *
 * @param h Pointeur vers le tas
 * @return Boolean : True / False
 */
bool is_heap_empty(Heap *h);
//float pop_heap(Heap *h); //pop the root value
//void push_heap(Heap *h, float value);
//float replace_heap(Heap *h, float value); // pop root and push a new key.

/**
 * @brief Retourne la racine
 *
 * @param h Pointeur vers le tas
 * @return float : racine
 */
float peek_heap(Heap *h); // return root value but dont remove it

/**
 * @brief Vide le tas
 *
 * @param h Pointeur vers le tas
 */
void clear_heap(Heap *h);
//void heapify(Heap *s, float array[], size_t array_size); //create Heap from array
//void merge(Heap *dest, Heap *src); //merge src into dest