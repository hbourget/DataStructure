#include "queue.h"

void init_queue(Queue *s){ 
    s->index = 0;
}

void enqueue(Queue *q, float value){
    q->data[q->index] = value;
    q->index++;
}

float dequeue(Queue *q){
    float value = q->data[0];
    int count = q->index - 2;

    for (int i = 0; i <= count; i++)
    {
        q->data[i] = q->data[i+1];
    }
    q->index--;

    return value;
}

bool is_queue_empty(Queue *q){
    if(!q->index)
        return true;
    return false;
}

float front(Queue *q){
    return q->data[0];
}

void clear(Queue *q){
    q->index = 0;
}
