#ifndef CONSTANTES_H
#define CONSTANTES_H
#include<stdio.h>

//Menu das listas
extern char Cmenu[];

//tamanho das listas
extern const int CTAMANHOLISTAS;
extern const int CTAMANHOLISTASMAIOR;

//Listas ordenadas em ordem ascendente com CTAMANHOLISTAS
extern int Clista1[];
extern int Clista2[];
extern int Clista3[];
extern int Clista4[];
extern int Clista5[];

//Listas ordenadas em ordem asecendente com CTAMNHOLISTASMAIOR
extern int Clista1M[];
extern int Clista2M[];
extern int Clista3M[];
extern int Clista4M[];
extern int Clista5M[];

//Mostrar as listas

void CMostarAsListasAscendentes();
void CMostarAsListasAscendentesMaiores();
void CMostrarUmaLista(int list[], int tamanho);






#endif //CONSTANTES_H
