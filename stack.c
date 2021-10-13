/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "stack.h"

void init_stack(Stack *s){
    //s = malloc(sizeof(Stack));
    s->index = 0;
}

/**
 * @brief Ajouter une valeur en haut de la pile 
 * 
 * index représente l'index de fin de la pile.
 * Pour chaque élément de la pile on vas le faire passer 
 * a l'index suivant a reculon de manère à faire une place en haut de la pile
 * Puis on ajoute la valeur en haut de la liste
 * Enfin on augment l'index de 1
 * 
 * @param s Pointeur vers la pile
 * @param value Valeur a ajouter en haut de la pile
 */

void push(Stack *s, float value) {
    //Ajouter une valeur en haut de la pile
    //C'est décaller toutes les valeurs vers la fin
    //Et ajouter la nouvelle valeur a l'index 0
    s->data[s->index] = value;
    s->index++;

}

/**
 * @brief Sort la première valeur de la pile
 * 
 * Sort la première valeur de la pile puis décalle tout les éléments
 * vers le haut de la pile.
 * 
 * @param s Pointeur vers la pile
 * @param value Valeur a ajouter en haut de la pile
 * @return Revois la première valeur de la pile
 */
float pop(Stack *s){
    float ret = s->data[s->index-1];

    s->index--;

    return ret;
}

/**
 * @brief Permet de savoir si le stack est vide ou non
 * 
 * Si l'index est a zéro c'est qu'il n'yas a pas de valeur
 * 
 * @param s Pointeur vers la pile
 * @param value Valeur a ajouter en haut de la pile
 * @return Revois la première valeur de la pile
 */
bool is_stack_empty(Stack *s){
    if(!s->index){
        printf("empty\n");
        return true;
    }
    printf("not empty\n");
    return false;
}

float peek(Stack *s){
    //Lire la première valeur du tableau sans la sortire
    return s->data[s->index];
}

void dup(Stack *s){
    //Dupliquer la première valeur du stack
    
}

void swap(Stack *s){
    //Echanger les deux premères valeurs du stack
    float temp;
    temp = s->data[0];
    s->data[0] = s->data[1];
    s->data[1] = s->data[0];

}
void stack_clear(Stack *s){
    s->index = 0;
}