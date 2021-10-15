#include "headers/array_list.h"

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

void init_array_list(Array_list *l)
{
    l->index = 0;
}

void insert_at(Array_list *l, int position, float value)
{
    if(position > l->index)
    {
        add(l, position);
    }
    else
    {
        //Decalage de toutes les données après la position demandée de 1 case
        for(int i = l->index; i >= position; i--)
        {
            l->data[i +1] = l->data[i];
        }
        l->data[position] = value;
        l->index = l->index+1;
    }
}

void add(Array_list *l, float value)
{
    l->data[l->index] = value;
    l->index = l->index + 1;
}

float remove_at(Array_list *l, int position)
{
    float ret = l->data[position];
    //Decalage de toutes les données de 1 case jusqu'à la valeur demandé
    for(int i = position; i <= l->index; i++)
    {
        l->data[i] = l->data[i+1];
    }
    l->index = l->index -1;
    return ret;
}

float get_at(Array_list *l,int position)
{
    float ret;
    ret = l->data[position];
    return ret;
}

void clear_arraylist(Array_list *l)
{
    for (int i = 0; i < l->index; ++i)
    {
        l->data[i] = 0;
    }
    l->index= 0;
}