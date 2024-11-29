#ifndef CRIARARRAYS_H
#define CRIARARRAYS_H

#include<stdio.h>
#include<malloc.h>
#include<time.h>
#include<stdlib.h>
#include <ctype.h>
#include<string.h>

// Criar uma lista com n elementos para provar os algoritmos de busca
int* CACriarListaComIntervalo(int intervalos, int tamanho);

void CAPrintarArrayDeInteiros(int arr[], int tamanho);

int* CACriarArrayRecebendoDoUsuario(int tamanho);

int* CACriarArrayAoAzar(int min, int max,int tamanho);

//Strings 

char** CACriarArrayStrings(int tamanho);
void CAConvertirAMaiusculas(char* str);
void CAPrintarArrayDeStrings(char **str, int tamanho);

//Punto Flotante

float* CACriarArrayDePuntoFlotanteAoAzar(int min, int max, int tamanho);
void CAPrintarArrayDePuntoFlotante(float arr[], int tamanho);



#endif //CRIARARRAYS_H
