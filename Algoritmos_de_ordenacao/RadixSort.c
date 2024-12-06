#include "RadixSort.h"

char RaSortmenu[] = "1.- Usar o Algoritmo\n2.- Entender como funciona o algoritmo na base 2\n->"; 
// Encontra qual e o maior valor no array recibido como argumento
int static MaiorNuemero(int arr[], int tamanho)
{
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++)
        if (arr[i] > maior)
            maior = arr[i];
    return maior;
}

// Uma funcao que ordena o arr[] com 
// O digito que a gente precisa segundo o exp. //Exemplo: Quero decenas (66/10) % 10
void RaSortCountSort(int arr[], int tamanho, int exp)
{
    switch (exp)
    {
        case 1:
            printf("Vamos a ordenar as unidades\n\n");
            break;
        case 10:
            printf("\nVamos a ordenar as decenas\n\n");
            break;
        case 100:
            printf("\nVamos a ordenar as centenas\n\n");
            break;
        case 1000:
            printf("\nVamos a ordenar a unidade de mil\n\n");
            break;
        case 10000:
            printf("\nVamos a ordenar as decenas de mil\n\n");
            break;
        case 100000:
            printf("\nVamos a ordenar as centenas de mil\n\n");
            break;

        default:
            printf("\nVamos a ordenar uma unidade maior que uma centena de mil\n\n");
            break;
    }



    // output array
    int* output = (int*)malloc(tamanho*sizeof(int));
    if (output == NULL)
    {
        printf("Nao foi possivel alocar a memoria\n");
        return;
    }
    int i;
    int count[10] = { 0 };

    // Guarda as ocurrencas de cada número em count[]
    for (i = 0; i < tamanho; i++)
    {
        count[(arr[i] / exp) % 10]++;
    }
    // Modificamos o count[i] para que o count[i] tenha a posicao
    // atual dos digitos no output[]
    for (i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }
    // Criamos o array que vai sair no output
    for (i = tamanho - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // A gente copia o array output no arr[], e o arr[] agora
    // Tem os numeros ordenados segundo o digito que a gente precisa
    for (i = 0; i < tamanho; i++)
    {
        arr[i] = output[i];
    }
    switch (exp)
    {
    case 1:
        printf("Depois de ordenar as unidades: \n");
        CAPrintarArrayDeInteiros(output,tamanho);
        break;
    case 10:
        printf("Depois de ordenar as decenas: \n");
        CAPrintarArrayDeInteiros(output, tamanho);
        break;
    case 100:
        printf("Depois de ordenar as centenas: \n");
        CAPrintarArrayDeInteiros(output, tamanho);
        break;
    case 1000:
        printf("Depois de ordenar a unidade de mil: \n");
        CAPrintarArrayDeInteiros(output, tamanho);
        break;
    case 10000:
        printf("Depois de ordenar as decenas de mil: \n");
        CAPrintarArrayDeInteiros(output, tamanho);
        break;
    case 100000:
        printf("Depois de ordenar as centenas de mil: \n");
        CAPrintarArrayDeInteiros(output, tamanho);
        break;

    default:
        printf("Depois de ordenar uma unidade maior as centenas de mil: \n");
        CAPrintarArrayDeInteiros(output, tamanho);
        break;
    }




    free(output);
}

// The main function to that sorts arr[] of size n using
// Radix Sort
void RaSortRadixSort(int arr[], int tamanho)
{
    // Achamos o número maximo para contar a quantidade de 
    // digitos que a gente tem que ordenar
    int m = MaiorNuemero(arr, tamanho);

    // Do counting sort for every digit. Note that instead
    // of passing digit number, exp is passed. exp is 10^i
    // where i is current digit number
    for (int exp = 1; m / exp > 0; exp *= 10)
        RaSortCountSort(arr, tamanho, exp);
}


void RaSortUsarAlgoritmo()
{
    int tamanho;
    int* lista1;
    int i;
    printf("A gente vai ordenar primeiro uma lista com 3 digitos\n");
    printf("Preciso o tamanho da lista que quer ordenar\n");
    scanf_s(" %d", &tamanho);
    lista1 = CACriarArrayAoAzar(1, 1000, tamanho);
    printf("A lista que esta entrando e: ");
    CAPrintarArrayDeInteiros(lista1, tamanho);
    printf("\n");
    RaSortRadixSort(lista1, tamanho);
    printf("A lista ordenada e: ");
    CAPrintarArrayDeInteiros(lista1, tamanho);
    printf("\n");

    free(lista1);
    //Lista com 5 digitos
    printf("Agora nos vamos ordenar uma lista com 5 digitos\n");
    printf("Preciso o tamanho da lista que quer ordenar\n");
    scanf_s(" %d", &tamanho);
    lista1 = CACriarArrayAoAzar(1, 100000, tamanho);
    printf("A lista que esta entrando e: ");
    CAPrintarArrayDeInteiros(lista1, tamanho);
    printf("\n");
    RaSortRadixSort(lista1, tamanho);
    printf("A lista ordenada e: ");
    CAPrintarArrayDeInteiros(lista1, tamanho);
    printf("\n");

    free(lista1);

    //Lista com 10 digitos

    printf("Por ultimo a gente vai ordenar primeiro uma lista com 10 digitos\n");
    printf("Preciso o tamanho da lista que quer ordenar\n");
    scanf_s(" %d", &tamanho);
    lista1 = CACriarArrayAoAzar(1, 10000000000, tamanho);
    for (i = 0; i < tamanho; i++)
        lista1[i] += 1999568413;
    printf("A lista que esta entrando e: ");
    CAPrintarArrayDeInteiros(lista1, tamanho);
    printf("\n");
    RaSortRadixSort(lista1, tamanho);
    printf("A lista ordenada e: ");
    CAPrintarArrayDeInteiros(lista1, tamanho);
    printf("\n");

    free(lista1);
}

void RaSortComoFuncionaEmBinario()
{
    printf("No funcionamento do Radix Sort o que a gente faz para ordenar o array é criar um array auxiliar\n");
    printf("com a quantidade de numeros que tem a base que vamos a usar, por exemplo na base 10 a gente usa os digitos do [0..9]\n");
    printf("entao criamos 10 baldes, então para a base 2 a gente precisa so criar 2 baldes, e assim como se diferenca no ordenamento\n");
    printf("na base 10 e na base 2\n\n");
}