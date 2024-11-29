/*
* 6. Merge Sort
   - Implemente o Merge Sort para ordenar uma lista de n�meros inteiros. Explique o conceito de "dividir para conquistar" usado nesse algoritmo.
   - Modifique o Merge Sort para ordenar strings em ordem alfab�tica.
*/


#ifndef MERGESORT_H
#define MERGESORT_H


#include"CriarArrays.h"

extern char MSortmenu[];

//So ordena duas partes de uma lista j� ordenada do inicio at� o meio e o meio ate o final
void MSortMerge(int arr[], int tamanho, int left, int middle, int right);
void MSortMergeSort(int arr[], int tamanho, int left, int right);
void MSortUsarAlgoritmo();

//Modifique Strings em ordem alfabetica
void MSortMergeString(char** str, int tamanho, int left, int middle, int right);
void MSortMergeSortString(char** str, int tamanho, int left, int right);

void MSortUsarAlgoritmoStrings();

#endif //MERGESORT_H