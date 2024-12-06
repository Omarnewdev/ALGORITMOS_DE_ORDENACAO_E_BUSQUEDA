#include "QuickSort.h"

char QuSortmenu[] = "1.- Usar Algoritmo\n->";

void static CambiarNumero(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


//O algoritmo que estou usando escolhe diretamente o pivote
//1 no print para imprimir os array, 0 para nao imprimir
int static partition(int arr[], int low, int high) 
{

    // Coloca o pivote na primeira posicao
    int pivote = arr[low];
    int i = low;
    int j = high;

    while (i < j) 
    {

        // Achar o primeiro elemento maior que  
        // o pivote (desde o inicio)
        while (arr[i] <= pivote && i <= high - 1) 
        {
            i++;
        }

        // Achar o primeiro elemento menor ao    Find the first element smaller than
        // pivote (Desde o final)
        while (arr[j] > pivote && j >= low + 1) 
        {
            j--;
        }
        if (i < j) 
        {
            CambiarNumero(&arr[i], &arr[j]);
        }
    }
    CambiarNumero(&arr[low], &arr[j]);
    
    return j;
}

//1 no print para imprimir os array, 0 para nao imprimir
void QuSortQuickSort(int arr[], int low, int high,int print) 
{
    if (low < high) 
    {

        // Chamamos a funcao de particao para achar o Index da particao
        int pi = partition(arr, low, high);
        if(print)
            CAPrintarArrayDeInteiros(arr, high);
        // Chamamos a funcao recursivamente
        // A mitade e segundo o pi
        QuSortQuickSort(arr, low, pi - 1,print);
        QuSortQuickSort(arr, pi + 1,high,print);

    }
}

void QuSortUsarAlgoritmo()
{
    const int TAMANHOPEQUENO = 10;
    const int TAMANHOGRANDE = 1000;
    int* lista;
    char i;
    printf("Segundo a pesquisa que eu fiz o algoritmo e menos efetivo com listas pequenas e mais efetivo em listas grande\n");
    lista = CACriarArrayAoAzar(1, 200, TAMANHOPEQUENO);
    if (lista == NULL)
    {
        printf("Nao foi possivel alocar a memoria \n");
        return;
    }
    printf("O array que esta entrando e: ");
    CAPrintarArrayDeInteiros(lista, TAMANHOPEQUENO);
    printf("\n");
    QuSortQuickSort(lista, 0, TAMANHOPEQUENO-1,1);
    printf("O array ordenada e: ");
    CAPrintarArrayDeInteiros(lista, TAMANHOPEQUENO);
    printf("\n");
    free(lista);

    //lista de mil elementos
    printf("Digite um char para continuar\n");
    scanf_s(" %c", &i, 2);

    printf("A segunda lista que vai entrar e \n");
    lista = CACriarArrayAoAzar(1, 8000, TAMANHOGRANDE);
    if (lista == NULL)
    {
        printf("Nao foi possivel alocar a memoria \n");
        return;
    }
    printf("O array que esta entrando e: ");
    CAPrintarArrayDeInteiros(lista, TAMANHOGRANDE);
    printf("\n");
    QuSortQuickSort(lista, 0, TAMANHOGRANDE - 1, 0);
    printf("O array ordenada e: ");
    CAPrintarArrayDeInteiros(lista, TAMANHOGRANDE);
    printf("\n");
    free(lista);     
}

