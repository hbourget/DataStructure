/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aurelio
 */

#include <stdio.h>
#include "tests/asserts.h"

int main(int argc, char** argv)
{
    test_arraylist();
    test_heap();
    printf("Les tests ont reussis");
}
