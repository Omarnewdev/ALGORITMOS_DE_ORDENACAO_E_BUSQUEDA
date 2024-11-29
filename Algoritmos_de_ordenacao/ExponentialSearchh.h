/*
4. Exponential Search
	- Implemente o algoritmo Exponential Search para localizar um elemento em uma lista ordenada. 
	Explique como ele combina elementos do Jump Search e Binary Search.
	- Analise o desempenho do Exponential Search em listas muito grandes e pequenas.
*/

#ifndef EXPONENTIALSEARCH_H
#define EXPONENTIALSEARCH_H

#include <stdio.h>
#include "CriarArrays.h"


//Text
extern char ESmenu[];

//Funcoes
int ESExponentialSearch(int arr[], int valor_procurado, int tamanho, int* buscas);
void ESUsarAlgoritmo();
void ESAnaliseDoAlgoritmo();


#endif //EXPONENTIALSEARCH_H