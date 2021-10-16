/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   array_list.h
 * Author: aurelio
 *
 */

#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#define ARRAY_LIST_MAX_SIZE 100

typedef struct {
    float data[ARRAY_LIST_MAX_SIZE];
    int index;
} Array_list;


#endif /* ARRAY_LIST_H */

/**
 * @brief Initialise la liste
 *
 * @param l Pointeur vers la liste
 */
void init_array_list(Array_list *l);

/**
 * @brief Insère une valeur à une position donnée
 *
 * @param l Pointeur vers la liste
 * @param position Position à laquelle insérer la valeur
 * @param value Valeur à ajouter
 */
void insert_at(Array_list *l, int position, float value);

/**
 * @brief Ajoute une valeur à la fin de la liste
 *
 * @param l Le pointeur vers la liste
 * @param value Valeur à ajouter
 */
void add(Array_list *l, float value);

/**
 * @brief Supprime une valeur de la liste à une position donnée
 *
 * @param l Pointeur vers la liste
 * @param position Position de la valeur à supprimer
 * @return float Valeur supprimé
 */
float remove_at(Array_list *l, int position);

/**
 * @brief Retourne une valeur de la liste à une position donnée
 *
 * @param l Pointeur vers la liste
 * @param position Position de la valeur à retourner
 * @return float Valeur retourné
 */
float get_at(Array_list *l,int position);

/**
 * @brief Vide la liste
 *
 * @param l Pointeur vers la liste
 */
void clear_arraylist(Array_list *l);



