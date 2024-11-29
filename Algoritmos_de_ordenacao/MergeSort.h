/*
* 6. Merge Sort
   - Implemente o Merge Sort para ordenar uma lista de números inteiros. Explique o conceito de "dividir para conquistar" usado nesse algoritmo.
   - Modifique o Merge Sort para ordenar strings em ordem alfabética.
*/


#ifndef MERGESORT_H
#define MERGESORT_H


#include"CriarArrays.h"

extern char MSortmenu[];

//So ordena duas partes de uma lista já ordenada do inicio até o meio e o meio ate o final
void MSortMerge(int arr[], int tamanho, int left, int middle, int right);
void MSortMergeSort(int arr[], int tamanho, int left, int right);
void MSortUsarAlgoritmo();

//Modifique Strings em ordem alfabetica
void MSortMergeString(char** str, int tamanho, int left, int middle, int right);
void MSortMergeSortString(char** str, int tamanho, int left, int right);

void MSortUsarAlgoritmoStrings();

#endif //MERGESORT_H