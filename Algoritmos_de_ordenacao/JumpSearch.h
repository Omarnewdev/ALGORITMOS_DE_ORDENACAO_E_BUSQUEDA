/*3. Jump Search
*   - Desenvolva o algoritmo Jump Search e determine o tamanho ideal do "salto" para uma lista de tamanho 
*
*   - Compare o tempo de execução do Jump Search com o Binary Search em listas de diferentes tamanhos.
*/

#ifndef JUMPSEARCH_H
#define JUMPSEARCH_H
#include<stdio.h>
#include<math.h>
#include"Constantes.h"
#include <time.h>
#include "BinarySearch.h"
#include "CriarArrays.h"

//Textos
extern char JSmenu[];
extern char JSescolher[];

//Funcoes

int JSJumpSearch(int arr[], int valor_procurado, int tamanho,int *buscas);
void JSUsarAlgoritmo();
void JSMedindoOTempo();






#endif //JUMPSEARCH_H