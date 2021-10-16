#include <stdbool.h>

#ifndef QUEUE_H
#define QUEUE_H


#define QUEUE_MAX_SIZE 100
/**
 * @brief Définition de la structure de donnée **Queue**
 * Cette structure de données fonction sur le principe de la queue
 * First In First Out
 */
typedef struct {
    ///Tableau contenant les données
    float data[QUEUE_MAX_SIZE];
    ///Index faisant office de curseur pour ajouter des valeurs
    int index;
} Queue;


#endif /* QUEUE_H */

/**
 * @brief Initialise la queue en mettant l'index à 0
 *  
 * @param q Le pointeur vers la queue
 */
void init_queue(Queue *q);

/**
 * @brief Ajouter une valeur dans la queue
 *  
 * @param q Pointeur vers la queue
 * @param value Valeur à ajouter à la queue
 */
void enqueue(Queue *q, float value);

/**
 * @brief Sortire la valeur qui est en tête de queue
 *  
 * @param q Pointeur vers la queue
 * @return La valeur en tête de queue sous le format **float**
 */
float dequeue(Queue *q);

/**
 * @brief Test si il y a des éléments dans la queue
 *  
 * @param q Pointeur vers la queue
 * @return Boolean : True / False
 */
bool is_queue_empty(Queue *q);

/**
 * @brief Lire la valeur à la tête de la queue
 *  
 * @param q Pointeur vers la queue
 * @param value Valeur à ajouter à la queue
 */
float front(Queue *q);

/**
 * @brief Remettre la queue à zéro
 *  
 * @param q Pointeur vers la queue
 */
void clear(Queue *q);

