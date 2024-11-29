#include"MergeSort.h"
char MSortmenu[] = "1.- Usar o algoritmo\n2.- Usar o algoritmo com Strings\n-> ";

//So ordena duas partes de uma lista já ordenada do inicio até o meio e o meio ate o final
void MSortMerge(int arr[], int tamanho, int left, int middle, int right)
{

    // transfere os elementos entre left e right para um array auxiliar.
    int* helper = malloc(sizeof(int) * (right - left + 1));
 

    if (helper == NULL)
    {
        printf("Nao foi possivel alocar a memoria\n");
        return;
    }

    int i, j, k;
    for (i = left; i <= right; i++) {
        helper[i - left] = arr[i];
    }

    i = left;
    j = middle + 1;
    k = left;

    while (i <= middle && j <= right) {
        if (helper[i - left] <= helper[j - left]) {
            arr[k] = helper[i - left];
            i++;
        }
        else {
            arr[k] = helper[j - left];
            j++;
        }
        k++;
    }

    // se a metade inicial não foi toda consumida, faz o append.
    while (i <= middle) {
        arr[k] = helper[i - left];
        i++;
        k++;
    }

    free(helper);

    // Não precisamos nos preocupar se a metade final foi 
    // toda consumida, já que, se esse foi o caso, ela já está
    // no array final.
}


//Aqui é a implementacao do algoritmo
void MSortMergeSort(int arr[],int tamanho, int left, int right) 
{

    if (left >= right)
        return;

    else {
        int middle = (left + right) / 2;
        MSortMergeSort(arr,tamanho, left, middle);
        MSortMergeSort(arr, tamanho ,middle + 1, right);

        MSortMerge(arr,tamanho, left, middle, right);
        CAPrintarArrayDeInteiros(arr, tamanho);
    }

}

void MSortUsarAlgoritmo()
{
    int tamanho;
    int min;
    int max;
    int* arr1;
    printf("Vamos a usar o MergeSort vamos a criar o array\n");
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

    printf("O array que vai ser ordenado e: ");
    CAPrintarArrayDeInteiros(arr1, tamanho);
    MSortMergeSort(arr1, tamanho, 0, tamanho - 1);
    CAPrintarArrayDeInteiros(arr1, tamanho);
}


//Strings
void MSortMergeString(char** str, int tamanho, int left, int middle, int right)
{
    // transfere os elementos entre left e right para um array auxiliar.
    char** helper = malloc(sizeof(char*) * (right - left + 1));

    if (helper == NULL)
    {
        printf("Nao foi possivel alocar a memoria\n");
        return;
    }

    int i, j, k;
    for (i = left; i <= right; i++) {
        helper[i - left] = str[i];
    }

    i = left;
    j = middle + 1;
    k = left;

    while (i <= middle && j <= right) {
        if (strcmp(helper[i-left],helper[j-left]) <= 0)        //helper[i - left] <= helper[j - left]) {
        {    
            str[k] = helper[i - left];
            i++;
        }
        else {
            str[k] = helper[j - left];
            j++;
        }
        k++;
    }

    // se a metade inicial não foi toda consumida, faz o append.
    while (i <= middle) {
        str[k] = helper[i - left];
        i++;
        k++;
    }

    free(helper);

    // Não precisamos nos preocupar se a metade final foi 
    // toda consumida, já que, se esse foi o caso, ela já está
    // no array final.
}

void MSortMergeSortString(char** str, int tamanho, int left, int right)
{
    if (left >= right)
        return;

    else {
        int middle = (left + right) / 2;
        MSortMergeSortString(str, tamanho, left, middle);
        MSortMergeSortString(str, tamanho, middle + 1, right);

        MSortMergeString(str, tamanho, left, middle, right);
        CAPrintarArrayDeStrings(str, tamanho);
    }
}

void MSortUsarAlgoritmoStrings()
{
    int tamanho;
    char** str;
    printf("Primeiro o preciso do tamanho que vai ter o array\n-> ");
    scanf_s(" %d", &tamanho);
    str = CACriarArrayStrings(tamanho);
    if (str == NULL)
    {
        printf("Nao foi possivel alocar a memoria");
        return;
    }
    //Vamos a transformar todas as palavras a maisculas
    int i;
    for (i = 0; i < tamanho; i++)
    {
        CAConvertirAMaiusculas(str[i]);
    }
    
    CAPrintarArrayDeStrings(str,tamanho);
    MSortMergeSortString(str, tamanho,0,tamanho-1);

    printf("\n\nO array de Strings ficou: ");
    CAPrintarArrayDeStrings(str, tamanho);


    printf("\n");
}

