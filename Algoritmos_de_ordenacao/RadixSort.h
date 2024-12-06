/*
* 9. Radix Sort
   - Implemente o Radix Sort para ordenar uma lista de números inteiros. Teste-o com números de diferentes tamanhos 
   (ex.: 2 dígitos, 5 dígitos, 10 dígitos).
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