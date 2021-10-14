#include "queue.h"

void init_queue(Queue *s){  //initialisation de la queue
    s->index = 0;
}

void enqueue(Queue *q, float value){    //ajout d'un élément a la queue
    q->data[q->index] = value;
    q->index++;

}
float dequeue(Queue *q){    //sortie d'un élément de la queu
    float value = q->data[0];
    int count = q->index - 2;

    for (int i = 0; i <= count; i++)
    {
        q->data[i] = q->data[i+1];
    }
    q->index--;

    return value;
}

bool is_queue_empty(Queue *q){  //Queue est vide ?
    if(!q->index)
        return true;
    return false;
}

float front(Queue *q){  //première élément de la queue ? 
    return q->data[0];
}

void clear(Queue *q){ //vider la queue
    q->index = 0;
}
