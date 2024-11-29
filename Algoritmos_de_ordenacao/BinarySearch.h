/*
1. Binary Search
   - Implemente o algoritmo Binary Search em uma lista ordenada e encontre o índice de um elemento
   dado.
   - Explique por que a lista deve estar ordenada para que o Binary Search funcione corretamente.
   Forneça exemplos.
*/

#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include<stdio.h>
#include "Constantes.h"
//Textos
extern char BSmenu[] ;
extern char BSescolher[];


//funcoes
int BSBuscaBinaria(int list[], int valor, int tamanho,int* buscas);
void BSPorqueListasOrdenadas();
void BSUsarAlgoritmo();

#endif //BINARYSEARCH_H


