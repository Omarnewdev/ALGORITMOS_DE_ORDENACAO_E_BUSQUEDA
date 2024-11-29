/*
*2. Interpolation Search
*   - Crie uma fun��o que implemente o Interpolation Search e teste-a em listas ordenadas com intervalos uniformes e n�o uniformes. 
*	Compare com o Binary Search.
*   - Identifique casos em que o Interpolation Search � mais eficiente que o Binary Search.
*/
#ifndef INTERPOLATIONSEARCH_H
#define INTERPOLATIONSEARCH_H
#include <stdio.h>
#include "Constantes.h"
#include "BinarySearch.h"

//Text
extern char ISexercicio1[];
extern char ISescolher[];
extern char ISmenu[];


//Funcoes
int ISInterpolationSearch(int list[], int valor, int tamanho,int* buscas);
void ISusarAlgoritmo();
void IStesteComBinarySearch();



#endif //INTERPOLATIONSEARCH_H
