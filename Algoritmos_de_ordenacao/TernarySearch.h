/*
*11. Ternary Search
    - Desenvolva o algoritmo Ternary Search para localizar um elemento em uma lista ordenada. 
    Compare seu desempenho com o Binary Search.
    - Identifique situações em que o Ternary Search seria mais eficiente que o Binary Search.
*/


#ifndef TERNARYSEARCH_H
#define TERNARYSEARCH_H

#include "Constantes.h"

//Text
extern char TSmenu[];


//Funcoes
int TSTernarySearch(int arr[], int left, int right, int target);
void TSUsarAlgoritmo();
void TSExplicao();

#endif //TERNARYSEARCH