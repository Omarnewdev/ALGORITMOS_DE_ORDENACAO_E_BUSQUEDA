#include "BucketSort.h"

#include <stdio.h>
#include <stdlib.h>

char BuSortmenu[] = "1.- Usar o algoritmo\n-> ";

// Función para insertar un número en un bucket usando realloc
static void insertarEnBucket(float** bucket, int* tam, float num) {
    (*tam)++;
    *bucket = (float*)realloc(*bucket, (*tam) * sizeof(float));
    if (*bucket == NULL) {
        perror("Error al asignar memoria para el bucket");
        exit(EXIT_FAILURE);
    }
    (*bucket)[(*tam) - 1] = num;
}

// Función de Insertion Sort para ordenar un bucket
static void insertionSort(float* arr, int n) {
    for (int i = 1; i < n; i++) {
        float key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Implementación de Bucket Sort
void BuSortBucketSort(float* arr, int tamanho) 
{
    if (tamanho <= 0) return;

    // Encuentra el valor mínimo y máximo
    float min = arr[0], max = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Normaliza los valores al rango [0, 1)
    int numBuckets = 10; // Número de buckets
    float range = max - min;
    if (range == 0) range = 1; // Evita división por cero si todos los números son iguales

    // Crea los buckets
    float** buckets = (float**)calloc(numBuckets, sizeof(float*));
    int* sizes = (int*)calloc(numBuckets, sizeof(int));

    if (buckets == NULL || sizes == NULL) {
        perror("Error al asignar memoria para los buckets");
        exit(EXIT_FAILURE);
    }

    // Distribuye los números en los buckets
    for (int i = 0; i < tamanho; i++) {
        int bucketIndex = (int)((arr[i] - min) / range * (numBuckets - 1));
        insertarEnBucket(&buckets[bucketIndex], &sizes[bucketIndex], arr[i]);
    }

    // Ordena cada bucket y combina los resultados
    int index = 0;
    for (int i = 0; i < numBuckets; i++) {
        if (sizes[i] > 0) {
            insertionSort(buckets[i], sizes[i]);
            for (int j = 0; j < sizes[i]; j++) {
                arr[index++] = buckets[i][j];
            }
        }
        free(buckets[i]);
    }

    free(buckets);
    free(sizes);
}

void BuSortUsarAlgoritmo()
{
    const int INTERVALOMIN = 0;
    const int INTERVALOMAX = 1;
    //listas
    float* arr;
    //in
    int tamanho;

    printf("Vamos a criar uma lista para usar o algorimto entre o intervalo %d e %d\n", INTERVALOMIN,INTERVALOMAX);
    printf("Vamos a precisar o tamanho da lista\n-> ");
    scanf_s(" %d", &tamanho);

    arr = CACriarArrayDePuntoFlotanteAoAzar(INTERVALOMIN, INTERVALOMAX,tamanho);
    if (arr == NULL)
    {
        printf("Nao foi possivel alocar a memoria\n\n");
        return;
    }
    printf("O array que vai entrar na funcao e: ");
    CAPrintarArrayDePuntoFlotante(arr, tamanho);
    printf("\n");

    BuSortBucketSort(arr, tamanho);
    printf("\n\nSaio assim: ");
    CAPrintarArrayDePuntoFlotante(arr, tamanho);

}