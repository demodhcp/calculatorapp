/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: subha
 *
 * Created on November 25, 2017, 12:10 AM
 */

#include <stdio.h>
#include <stdlib.h>
void add(int x,int y);
/*
 * 
 */
int main(int argc, char** argv) {
    printf("Hello world\n");
    
    int a=5,b=6;
    add(a,b);
    printf("exiting from main\n");
    return (EXIT_SUCCESS);
}

