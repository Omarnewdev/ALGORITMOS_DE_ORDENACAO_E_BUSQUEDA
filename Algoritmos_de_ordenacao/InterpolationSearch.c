#include "InterpolationSearch.h"

char ISescolher[] = "Qual lista voce quer usar\n->";
char ISmenu[] = "1.- Usar o algoritmo\n2.- Fazer um teste com o Binary Search\n";

int ISInterpolationSearch(int list[],int valor,int tamanho,int* buscas) {
    int min = 0;
    int max = tamanho - 1;
    int mid = -1;
    *buscas = 1;
    int index = -1;
    while (min <= max) {
        printf("Comparison %d \n", *buscas);
        printf("min : %d, list[%d] = %d\n", min, min, list[min]);
        printf("max : %d, list[%d] = %d\n", max, max, list[max]);
        (*buscas)++;

        // Evitar divisão por cero
        if (list[max] == list[min]) {
            printf("Error: list[min] (%d) es igual a list[max] (%d). División por cero.\n", list[min], list[max]);
            break;
        }


        // Usamos a formula para achar o medio
        mid = min + (((double)(max - min) / (list[max] - list[min])) * (valor - list[min]));
        printf("mid = %d\n", mid);

        // Temos que nos asegurar que mid este no rango
        if (mid < min) {
            mid = min;
        }
        else if (mid > max) {
            mid = max;
        }

        printf("mid ajustado = %d, list[%d] = %d\n", mid, mid, list[mid]);


        // valor procurado encontrado
        if (list[mid] == valor) {
            index = mid;
            break;
        }
        else {
            if (list[mid] < valor) {

                // Se o valor procurado e maior, o valor esta na parte sub lista direito
                min = mid + 1;
            }
            else {

                // Se o valor procurado e menor, o valor esta na parte sub lista direito
                max = mid - 1;
            }
        }
    }
    printf("Total comparacoes feitas: %d\n", --(*buscas));
    return index;
}

void ISusarAlgoritmo()
{
    char escolherLista = '0';
    int valor;
    int achado;
    int b=0;

    CMostarAsListasAscendentes();
    printf(ISescolher);
    while (escolherLista != '1' && escolherLista != '2' && escolherLista != '3' && escolherLista != '4' && escolherLista != '5')
    {
        scanf_s(" %c", &escolherLista, 1);
        switch (escolherLista)
        {
        case '1':
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            achado = ISInterpolationSearch(Clista1, valor, CTAMANHOLISTAS,&b);
            break;
        case '2':
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            achado = ISInterpolationSearch(Clista2, valor, CTAMANHOLISTAS,&b);
            break;
        case '3':
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            achado = ISInterpolationSearch(Clista3, valor, CTAMANHOLISTAS,&b);
            break;
        case '4':
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            achado = ISInterpolationSearch(Clista4, valor, CTAMANHOLISTAS,&b);
            break;
        case '5':
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            achado = ISInterpolationSearch(Clista5, valor, CTAMANHOLISTAS,&b);
            break;
        default:
            printf("Por favor escolhe uma lista corretamente\n->");
            break;
        }
    }
    if (achado == -1)
    {
        printf("O valor procurado nao esta na lista %c\n", escolherLista);
    }
    else
    {
        printf("O valor procurado na lista %c esta na posicao %d\n", escolherLista, achado);
    }

    printf("\n\n\n");
}

void IStesteComBinarySearch()
{
    int pruebaBS;
    int pruebaIS;
    int achadoIS;
    int achadoBS;
    int valor;
    printf("No teste do Interpolaton Search e o Binary Search vamos a usar duas listas\n");
    CMostrarUmaLista(Clista1, CTAMANHOLISTAS);
    printf("Insira o valor a procurar -> ");
    scanf_s("%d", &valor);
    printf("Primeiro vamos com a lista 1, procurando o valor %d\n",valor);
    printf("Primiro o algoritmo de Busca Binaria\n");
    achadoBS = BSBuscaBinaria(Clista1, valor, CTAMANHOLISTAS, &pruebaBS);
    printf("\n\nSegundo o algortimo de Interpolation Search\n");
    achadoIS = ISInterpolationSearch(Clista1,valor, CTAMANHOLISTAS, &pruebaIS);
    if (achadoBS != -1 && achadoIS != -1)
    {
        if (pruebaBS < pruebaIS) printf(" O melhor foi o Algoritmo de Busca Binaria com %d pesquisadas\n",pruebaBS);
        else printf("O melhor foi o Algoritmo de Interpolation Search com %d pesquisadas\n", pruebaIS);
    }
    else
    {
        printf("Um dos algoritmos nao acho o valor\n");
    }
    printf("\n\n\n");
    printf("Agora vamos a usar a lista 4\n");
    CMostrarUmaLista(Clista4, CTAMANHOLISTAS);
    printf("Insira o valor a procurar -> ");
    scanf_s("%d", &valor);
    printf("Agora vamos com a lista 4, procurando o valor %d\n",valor);
    printf("Primiro o algoritmo de Busca Binaria\n");
    achadoBS = BSBuscaBinaria(Clista4, valor, CTAMANHOLISTAS, &pruebaBS);
    printf("\n\nSegundo o algortimo de Interpolation Search\n");
    achadoIS = ISInterpolationSearch(Clista4, valor, CTAMANHOLISTAS, &pruebaIS);
    if (achadoBS != -1 && achadoIS != -1)
    {
        if (pruebaBS < pruebaIS) printf(" O melhor foi o Algoritmo de Busca Binaria com %d pesquisadas\n", pruebaBS);
        else printf("O melhor foi o Algoritmo de Interpolation Search com %d pesquisadas\n", pruebaIS);
    }
    else
    {
        printf("Um dos algoritmos nao acho o valor\n");
    }

    printf("\n\n\n");
    printf("Da para ver que quando sao numeros seguidos o Interpolation Search funciona melhor que o Binary Search :)\n\n\n");



}