
#include "ExponentialSearchh.h"

char ESmenu[] = "Que quer fazer\n1.- Usar o algoritmo Exponential Search\n2.- Teste do Algoritmo\n->";

int ESExponentialSearch(int arr[], int valor_procurado, int tamanho, int* buscas)
{
    int exponente = 1;
    int min = 0;
    int max;
    int mid;
    *buscas = 0;
    if (tamanho <= 0) return -1;
    //Quando entra o buscas dentro da funcoa faz a primeira pesquisa
    (*buscas)++;
    if (arr[0] == valor_procurado)
        return 0;

    //Comecamos com o rango exponencial para achar o intervalo onde pode estar o valor procurado
    while (exponente < tamanho && arr[exponente] <= valor_procurado) 
    {
        printf("O numero %d ainda e menor que o valor procurado %d\n", arr[exponente], valor_procurado);
        (*buscas)++;
        min = exponente; //Atualizamos o minimo para achar o 
        exponente *= 2;
    }
    
    if (exponente >= tamanho) max = tamanho-1; //se for o caso que o exponente fosse maior que o tamnho da lista   
    else max = exponente;                      //a gente pega o tamanho como max

    printf("O numero procurado esta pode ser que esteja no intervalo dos indices %d e %d\n\n", min, max);
    while (min <= max) 
    {
        (*buscas)++;

        mid = (min + max) / 2;
        printf("O indice: %d tem o valor: %d\n", mid, arr[mid]);
        if (arr[mid] == valor_procurado)
            return mid;
        else if (arr[mid] < valor_procurado)
            min = mid + 1;
        else
            max = mid - 1;
    }

    return -1;
}



void ESUsarAlgoritmo()
{
    int tamanho;
    int intervalo;
    int* arr;
    int valor;
    int busca;
    int achado;
    printf("Vamos a usar as listas com intervalos se voce colocar 2 vai criar a lista 2,4,6,8,...\n\n");
    printf("Primeiro eu preciso do tamanho que vai ter a lista\n-> ");
    scanf_s(" %d", &tamanho);
    printf("Agora eu vou precisar do intervalo\n-> ");
    scanf_s(" %d", &intervalo);

    arr = CACriarListaComIntervalo(intervalo, tamanho);

    if (arr == NULL)
    {
        printf("Por favor insire um numero menor para o tamanho da lista\n");
        return;
    }

    printf("Agora que valor voce quer procurar\n-> ");
    scanf_s(" %d", &valor);
    achado = ESExponentialSearch(arr, valor, tamanho, &busca);
    if (achado != -1)
        printf("O valor %d foi achado em %d iteracoes na posicao %d em uma lista de %d valores\n\n", valor, busca, achado, tamanho);
    else
        printf("O valor %d nao esta na lista de %d elementos e fez %d iteracoes para ver se existe o valor\n\n", valor, tamanho, busca);
}

void ESAnaliseDoAlgoritmo()
{
    const int INTERVALO1 = 3;
    const int INTERVALO2 = 5;
    const int TAMANHO1 = 100;
    const int TAMANHO2 = 10000;
    const int VALOR1 = 240;
    const int VALOR2 = 37610;
    int achado;
    int busca;
    
    int* listaNova = CACriarListaComIntervalo(INTERVALO1, TAMANHO1);
    if (listaNova == NULL)
    {
        printf("Nao foi possivel alocar a memoria\n");
        return;
    }
    printf("Para este analisis eu vou usar duas listas uma com %d elementos e outra com %d elementos\nSo vamos contar a qunatidade de iteracoes\n\n",TAMANHO1,TAMANHO2);
    printf("Vamos a procurar o valor %d na primeira lista\n\n",VALOR1);
    achado = ESExponentialSearch(listaNova, VALOR1, TAMANHO1, &busca);
    if (achado != -1)
        printf("O valor %d foi achado em %d iteracoes na posicao %d em uma lista de %d valores\n\n", VALOR1, busca, achado, TAMANHO1);
    else
        printf("O valor %d nao esta na lista de %d elementos e fez %d iteracoes para ver se existe o valor\n\n", VALOR1, TAMANHO1, busca);
    free(listaNova);

    listaNova = CACriarListaComIntervalo(INTERVALO2, TAMANHO2);
    if (listaNova == NULL)
    {
        printf("Nao foi possivel alocar a memoria\n");
        return;
    }
    printf("Depois vamos procurar o valor %d na segunda lista\n",VALOR2);
    achado = ESExponentialSearch(listaNova, VALOR2, TAMANHO2, &busca);
    if (achado != -1)
        printf("O valor %d foi achado em %d iteracoes na posicao %d em uma lista de %d valores\n\n", VALOR2, busca, achado, TAMANHO2);
    else
        printf("O valor %d nao esta na lista de %d elementos e fez %d iteracoes para ver se existe o valor\n\n", VALOR2, TAMANHO2, busca);
    free(listaNova);
}