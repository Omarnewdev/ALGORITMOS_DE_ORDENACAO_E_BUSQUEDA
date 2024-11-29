#include "JumpSearch.h"


char JSescolher[] = "Qual lista voce quer usar\n->";
char JSmenu[] = "1.- Usar o algortimo\n2.- Comparar o tempo com o Binary Search\n";





int JSJumpSearch(int arr[], int valor_procurado, int tamanho, int* buscas)
{
    //Primeiro calculamos o tamanho do pulo do array
    int pulo = sqrt(tamanho);
    int indice_atual = pulo;

    *buscas = 0;

    int anterior = 0;
    printf("o tamnanho de pulo vai ser %d\n", pulo);
    //Primeiro temos que ir pulando ate que percorrer todo o array se for necessario
    //Uso a funcao min para nao sair do array e invadir memoria
    while (arr[min(tamanho, indice_atual) - 1] < valor_procurado)
    {
        printf("Estamos no indice %d com o valor %d\n", (min(tamanho, indice_atual) - 1), arr[min(tamanho, indice_atual) - 1]);
        (*buscas)++;
        anterior = indice_atual;
        indice_atual += pulo;
        if (indice_atual >= tamanho)
        {
            return -1;
        }
    }

    printf("Deixamos de pular e começamos a pesquisa em forma linear\n");
    //Vamos a fazer a busqueda_linear para ver se o elemento esta no array
    // Búsqueda lineal dentro del intervalo encontrado
    while (anterior < tamanho && arr[anterior] < valor_procurado)
    {
        printf("Estamos no índice %d com o valor %d\n", anterior, arr[anterior]);
        (*buscas)++;
        anterior++;
    }

    // Comprobamos si encontramos el valor
    if (anterior < tamanho && arr[anterior] == valor_procurado)
    {
        return anterior;
    }

    return -1; // Valor no encontrado
}


void JSUsarAlgoritmo()
{
    char escolherLista = '0';
    int valor;
    int achado;
    int b;
    printf("1.-");
    CMostrarUmaLista(Clista1, CTAMANHOLISTAS);
    printf("2.-");
    CMostrarUmaLista(Clista3, CTAMANHOLISTAS);
    printf("3.-");
    CMostrarUmaLista(Clista5, CTAMANHOLISTAS);
    printf("4.-");
    CMostrarUmaLista(Clista1M, CTAMANHOLISTASMAIOR);
    printf("5.-");
    CMostrarUmaLista(Clista3M, CTAMANHOLISTASMAIOR);
    printf(JSescolher);
    while (escolherLista != '1' && escolherLista != '2' && escolherLista != '3' && escolherLista != '4' && escolherLista != '5')
    {
        scanf_s(" %c", &escolherLista, 1);
        switch (escolherLista)
        {
        case '1':
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            achado = JSJumpSearch(Clista1, valor, CTAMANHOLISTAS, &b);
            break;
        case '2':
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            achado = JSJumpSearch(Clista3, valor, CTAMANHOLISTAS, &b);
            break;
        case '3':
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            achado = JSJumpSearch(Clista5, valor, CTAMANHOLISTAS, &b);
            break;
        case '4':
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            achado = JSJumpSearch(Clista1M, valor, CTAMANHOLISTASMAIOR, &b);
            break;
        case '5':
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            achado = JSJumpSearch(Clista3M, valor, CTAMANHOLISTASMAIOR, &b);
            break;
        default:
            printf("Por favor escolhe uma lista corretamente\n->");
            break;
        }
    }
    if (achado == -1)
    {
        printf("O valor procurado %d nao esta na lista %c\n", valor, escolherLista);
    }
    else
    {
        printf("O valor procurado na lista %c esta na posicao %d\n", escolherLista, achado);
    }

    printf("\n\n\n");
}


/*Para medir o tempo de execução vou usar a biblioteca sy/time.h que tem o C, vou usar
* Contas do microprocessador para medir o tempo entre os dois
*/
void JSMedindoOTempo()
{
    const TAMANHOLISTAPRUEBA = 10000000;

    int valor;
    int iteracoes;
    int intervalos;
    int achadoJS;
    int achadoBS;


    //vamos a criar uma lista com 1000000 elementos para ver o rendimento de JUMPSEARCH e BINARY SEARCH
    printf("Vou precisar de um intevarlo para criar uma lista por exemplo se for 2 a lista vai ser 0,2,4,...\n-> ");
    scanf_s(" %d", &intervalos);
    int* novo = CACriarListaComIntervalo(intervalos, TAMANHOLISTAPRUEBA);
    printf("Escolhe um valor para que procurem os dois algoritmos\n-> ");
    scanf_s(" %d", &valor);
    clock_t inicio = clock();

    achadoBS = BSBuscaBinaria(novo, valor, TAMANHOLISTAPRUEBA, &iteracoes);

    clock_t fin = clock();

    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    if (achadoBS != -1)
        printf("\n\nO algoritmo de busca Binaria tomou %.6f segundos para achar o valor %d em uma lista de %d Elementos com %d iteracoes.\n\n", tiempo, valor, TAMANHOLISTAPRUEBA, iteracoes);
    else
        printf("O valor %d nao foi achado na lista e tardo %.6f segundos em saber isso\n\n", valor, tiempo);

    inicio = clock();

    achadoJS = JSJumpSearch(novo, valor, TAMANHOLISTAPRUEBA, &iteracoes);

    fin = clock();
    tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    if (achadoJS != -1)
        printf("\n\nO algoritmo Jump Search tomou %.6f segundos para achar o valor %d em uma lista de %d Elementos com %d iteracoes.\n\n", tiempo, valor, TAMANHOLISTAPRUEBA, iteracoes);
    else
        printf("O valor %d nao foi achado na lista e tardo %.6f segundos em saber isso\n\n", valor, tiempo);
    free(novo);




    //LISTAS COM TAMANHO TAMANHOLISTAPRUEBA
    printf("\n\nVou precisar de um intevarlo para criar uma lista por exemplo se for 2 a lista vai ser 0,2,4,...\n->");
    scanf_s(" %d", &intervalos);
    novo = CACriarListaComIntervalo(intervalos, TAMANHOLISTAPRUEBA);


    printf("Escolhe um valor para que procurem os dois algoritmos\n-> ");
    scanf_s(" %d", &valor);
    inicio = clock();

    achadoBS = BSBuscaBinaria(novo, valor, TAMANHOLISTAPRUEBA, &iteracoes);

    fin = clock();

    tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    if (achadoBS != -1)
        printf("\n\nO algoritmo de busca Binaria tomou %.6f segundos para achar o valor %d em uma lista de %d Elementos com %d iteracoes.\n\n", tiempo, valor, TAMANHOLISTAPRUEBA, iteracoes);
    else
        printf("O valor %d nao foi achado na lista e tardo %.6f segundos em saber isso\n\n", valor, tiempo);
    inicio = clock();

    achadoJS = JSJumpSearch(novo, valor, TAMANHOLISTAPRUEBA, &iteracoes);

    fin = clock();
    tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    if (achadoJS != -1)
        printf("\n\nO algoritmo Jump Search tomou %.6f segundos para achar o valor %d em uma lista de %d Elementos com %d iteracoes.\n\n", tiempo, valor, TAMANHOLISTAPRUEBA, iteracoes);
    else
        printf("O valor %d nao foi achado na lista e tardo %.6f segundos em saber isso\n\n", valor, tiempo);
    free(novo);
}
