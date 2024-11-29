/*
5. Shell Sort
   - Implemente o Shell Sort com diferentes sequências de intervalo (ex.: Shell, Knuth, Hibbard). Compare os tempos de execução.
   - Explique como a escolha da sequência de intervalos afeta a eficiência do algoritmo.
*/

#ifndef SHELLSORT_H
#define SHELLSORT_H
#include "CriarArrays.h"
#include <math.h>

//Text

extern char SSortmenu[];

//Funcoes
// Hibbard´s Sequence
void SHShellsortHibbard(int a[], int tamanho);
//Knuth's sequence
void SHShellsortKnuth(int arr[], int tamanho);

//EXERCICIOS
void SSortUsarAlgoritmo();
void SSortExplicacao();




#endif  //SHELLSORT_H




