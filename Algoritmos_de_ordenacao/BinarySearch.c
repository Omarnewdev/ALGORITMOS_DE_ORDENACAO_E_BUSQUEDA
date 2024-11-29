#include "BinarySearch.h"

char BSmenu[] = "Que quer fazer\n1.- Usar o algoritmo de Busca Binaria\n2.-Explicacao porque nao funciona em listas ordenadas\n->";
char BSescolher[] = "Qual lista voce quer usar\n->";

int BSBuscaBinaria(int list[], int valor, int tamanho,int* buscas)
{
    int inicio = 0;
    int fim = tamanho - 1;
    *buscas = 0;

    while (inicio <= fim) {
        (*buscas)++;
        int meio = (inicio + fim) / 2 | 0;
        printf("O lugar procurado foi no indice %d com o valor %d\n", meio, list[meio]);

        if (list[meio] == valor) {
            printf("Foram feitas %d buscas\n", *buscas);
            return meio;
        }
        else if (list[meio] > valor) {
            fim = meio - 1;
        }
        else {
            inicio = meio + 1;
        }
    }
    printf("Foram feitas %d buscas\n", *buscas);
    return -1;
}

void BSPorqueListasOrdenadas()
{
    printf("O algoritmo de Busca Binaria só funciona com listas ordenadas porque vai sempre pegando a metade\n");
    printf("do array então se um número menor esta no lugar dos lugares maiores nunca vai ser enxergado\n");
    printf("\n\n\n");
}

void BSUsarAlgoritmo()
{
    char escolherLista = '0';
    int valor;
    int achado;
    int b;
    CMostarAsListasAscendentes();
    printf(BSescolher);
    while (escolherLista != '1' && escolherLista != '2' && escolherLista != '3' && escolherLista != '4' && escolherLista != '5')
    {
        scanf_s(" %c", &escolherLista, 1);
        switch (escolherLista)
        {
            case '1':
                printf("Insira o valor que quer procurar\n->");
                scanf_s(" %d", &valor);
                achado = BSBuscaBinaria(Clista1, valor, CTAMANHOLISTAS,&b);
                break;
            case '2':
                printf("Insira o valor que quer procurar\n->");
                scanf_s(" %d", &valor);
                achado = BSBuscaBinaria(Clista2, valor, CTAMANHOLISTAS,&b);
                break;
            case '3':
                printf("Insira o valor que quer procurar\n->");
                scanf_s(" %d", &valor);
                achado = BSBuscaBinaria(Clista3, valor, CTAMANHOLISTAS,&b);
                break;
            case '4':
                printf("Insira o valor que quer procurar\n->");
                scanf_s(" %d", &valor);
                achado = BSBuscaBinaria(Clista4, valor, CTAMANHOLISTAS,&b);
                break;
            case '5':
                printf("Insira o valor que quer procurar\n->");
                scanf_s(" %d", &valor);
                achado = BSBuscaBinaria(Clista5, valor, CTAMANHOLISTAS,&b);
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