#include <stdbool.h>

#ifndef STACK_H
#define STACK_H

#define STACK_MAX_SIZE 100
/**
 * @brief Définition de la structure de donnée **Stack**
 * Cette structure de données fonction sur le principe de la pile
 * Last In First Out
 */
typedef struct {
    ///Tableau contenant les données
    float data[STACK_MAX_SIZE];
    ///Index faisant office de curseur d'écriture permettant d'ajouter et retirer
    ///des valeurs
    int index;
} Stack;

#endif /* STACK_H */

/**
 * @brief Inistialiser la pile
 * 
 * Initialisation de la pile en mettant le pointeur à 0 
 *  
 * @param s Pointeur vers la pile
 */

void init_stack(Stack *s);

/**
 * @brief Ajoute une valeur à la pile
 *  
 * @param s Pointeur vers la pile
 * @param value Valeur a ajouter en haut de la pile
 */
void push(Stack *s, float value);

/**
 * @brief Sort la première valeur de la pile
 *  
 * @param s Pointeur vers la pile
 * @return Revois la première valeur de la pile au format **float**
 */
float pop(Stack *s);

/**
 * @brief Permet de savoir si le stack est vide ou non
 * 
 * Si l'index est a zéro c'est qu'il n'y a pas de valeur
 * 
 * @param s Pointeur vers la pile
 * @return Boolean : True / False
 */
bool is_stack_empty(Stack *s);

/**
 * @brief Permet de connaitre la valeur en haut du stack sans la manipuler
 * 
 * @param s Pointer vers la pile
 * @return La valeur en haut de la pile au format **float**
 */
float peek(Stack *s); 

/**
 * @brief Duplique la valeur en haut du stack
 * 
 * Place en haut de la pile une valeur identique a la première valeur de la pile
 * 
 * @param s Pointer vers la pile
 */
void dup(Stack *s);

/**
 * @brief Echange les deux premères valeurs de la pile
 *  
 * @param s Pointer vers la pile
 */
void swap(Stack *s);

/**
 * @brief Met le stack à zéro
 * 
 * Le clear se fait en remettant l'index à 0.
 * De cette manière toute nouvelle valeur écrasera l'ancienne qui aurait
 * pu être laissé la.
 * Cela agis donc comme si la pile été vide.
 *  
 * @param s Pointer vers la pile
 */
void stack_clear(Stack *s);


