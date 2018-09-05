/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: olivera
 *
 * Created on 28 de agosto de 2018, 11:50 PM
 */

#include <stdio.h>



/*
 * 
 */
int main() {
    int c1,c2,c3;
    float promedio;
    scanf("%d%d%d",&c1,&c2,&c3);
    promedio = (c1+c2+c3)/3;
    if(promedio>=6){
        printf("1");
    }
    else {
        printf("0");
    }
    
    
    return 0;
}

