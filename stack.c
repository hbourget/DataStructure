#include "stack.h"

void init_stack(Stack *s){
    s->index = 0;
}

void push(Stack *s, float value) {
    s->data[s->index] = value;
    s->index++;

}

float pop(Stack *s){
    float ret = s->data[s->index-1];

    s->index--;

    return ret;
}

bool is_stack_empty(Stack *s){
    if(!s->index)
        return true;
    return false;
}

float peek(Stack *s){
    return s->data[s->index-1];
}

void dup(Stack *s){
    float value = s->data[s->index-1];
    s->data[s->index] = value;
    s->index++;
}

void swap(Stack *s){
    float temp = s->data[s->index-1];
    s->data[s->index-1] = s->data[s->index-2];
    s->data[s->index-2] = temp;

}
void stack_clear(Stack *s){
    s->index = 0;
}