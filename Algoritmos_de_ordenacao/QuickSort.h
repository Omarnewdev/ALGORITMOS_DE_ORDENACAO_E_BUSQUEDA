/*
* 10. Quick Sort
    - Implemente o Quick Sort utilizando diferentes crit�rios para escolha do piv� 
    (ex.: primeiro elemento, �ltimo elemento, elemento do meio).
    - Analise o desempenho do Quick Sort em listas quase ordenadas e completamente desordenadas.
*/

#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "CriarArrays.h"

//Text
extern char QuSortmenu[];

//Funcao
void QuSortQuickSort(int arr[], int low, int high,int print);
void QuSortUsarAlgoritmo();




#endif //QUICKSORT