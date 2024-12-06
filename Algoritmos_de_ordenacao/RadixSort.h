/*
* 9. Radix Sort
   - Implemente o Radix Sort para ordenar uma lista de n�meros inteiros. Teste-o com n�meros de diferentes tamanhos 
   (ex.: 2 d�gitos, 5 d�gitos, 10 d�gitos).
   - Explique como o algoritmo lida com bases diferentes (ex.: base 10 e base 2).
*/

#ifndef RADIXSORT_H
#define RADIXSORT_H
#include "CriarArrays.h"

//Text
extern char RaSortmenu[];

//Funcoes
void RaSortRadixSort(int arr[], int n);
void RaSortCountSort(int arr[], int tamanho, int exp);
void RaSortUsarAlgoritmo();
void RaSortComoFuncionaEmBinario();

#endif //RADIXSORT_H