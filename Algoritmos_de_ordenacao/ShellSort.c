
#include "ShellSort.h"


char SSortmenu[] = "1.- Usar o algortimo\n2.- Explicacao do algritmo\n-> ";


void SHShellsortHibbard(int a[], int tamanho) 
{
    int i, j;
    int tmp, increment;
    //2^k-1 - Formula
    //2^INT[LOG(n)/LOG(2)]-1  
    //To implement we have to find the max number in the hibbard's sequence
    //to start from i.e. in our casse it should be < size of array.
    int numeroHibbard = pow(2, (int)(log(tamanho) / log(2))) - 1;
    printf("O primerio Gap e %d\n", numeroHibbard);
    for (increment = numeroHibbard; increment > 0; increment /= 2) {
        for (i = increment; i < tamanho; i++) {
            tmp = a[i];
            for (j = i; j >= increment; j -= increment) {
                if (tmp < a[j - increment]) {
                    a[j] = a[j - increment];
                }
                else {
                    break;
                }
            }
            a[j] = tmp;
        }
        printf(" Gap %d: ", increment);
        CAPrintarArrayDeInteiros(a, tamanho);
    }
}


// Shell Sort KNUTH
void SHShellsortKnuth(int arr[], int tamanho) 
{
    int i;
    int j;
    int tmp;
    int increment;
    for (increment = tamanho / 2; increment > 0; increment /= 2) 
    {
        for (i = increment; i < tamanho; i++) 
        {
            tmp = arr[i];
            for (j = i; j >= increment; j -= increment) 
            {
                if (tmp < arr[j - increment]) 
                {
                    arr[j] = arr[j - increment];
                }
                else 
                {
                    break;
                }
            }
            arr[j] = tmp;
        }

        printf(" Gap %d: ", increment);
        CAPrintarArrayDeInteiros(arr, tamanho);
    }
}

void SSortUsarAlgoritmo()
{
    int tamanho;
    int min;
    int max;
    int* arr1;
    int* arr2;
    printf("Vamos a usar dois tipos de sequencia a KNUTH e HIBBAD\nVamos a criar duas listas para ordenar e calcular o tempo que toma ordenar com cada sequencia\n");
    printf("Preciso do tamanho que vai ser o array\n-> ");
    scanf_s(" %d", &tamanho);
    printf("Agora vou precisar dos intervalos (O numero vai ser creado do min ao max)\n");
    printf("Primeiro o intervalo min\n-> ");
    scanf_s(" %d", &min);
    printf("Primeiro o intervalo max\n-> ");
    scanf_s(" %d", &max);
    
    //Criamos as listas

    arr1 = CACriarArrayAoAzar(min, max, tamanho);
    if (arr1 == NULL)
    {
        printf("Nao foi possivel alocar a memoria\n");
        return;
    }
    arr2 = CACriarArrayAoAzar(min, max, tamanho);
    if (arr2 == NULL)
    {
        printf("Nao foi possivel alocar a memoria\n");
        return;
    }

    //Agora vamos a calcular o tempo de execucao dos dois algortimos
    //Organizando a primeira lista com KNUTH
    clock_t inicio = clock();
    SHShellsortKnuth(arr1, tamanho);
    
    clock_t fin = clock();

    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("\n\nO tempo que demorou em organizar a lista com %d a sequencia de KNUTH foi de %.6f segundos\n\n", tamanho,tiempo);

    
    printf("Digite um numero para continuar\n-> ");
    scanf_s(" %d", &min);

    //Organizando a segunda lista com hibbard
    inicio = clock();
    SHShellsortKnuth(arr2, tamanho);

    fin = clock();

    tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("\n\nO tempo que demorou em organizar a lista com %d a sequencia de HIBBARD foi de %.6f segundos\n\n", tamanho,tiempo);
    free(arr1);
    free(arr2);

}

void SSortExplicacao()
{
    printf("Em poucas palavras a escolhe deste algoritmo ajuda:\n*A complexidade temporal (redução do número de operações).\n*O uso de recursos computacionais.\n*A convergência para a solução.\n\n");
}