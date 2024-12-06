#include "TernarySearch.h"

int Gcontador = 0;
char TSescolher[] = "Escolhe uma lista\n-> ";
char TSmenu[] = "1.- Usar o Algoritmo\n2.- Pequena explicacao\n-> ";


// Busqueda Ternary Search 
int TSTernarySearch(int arr[], int left, int right,int target)
{
    Gcontador++;
    // Primeiro vemos se o número left e menor que o numero right
    if (left <= right) 
    {
        // Calculamos dois pontos de quebre para dividir em 
        // subarray em treis partes iguais 
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        // Vemos si o valor procurado esta no mid1 ou no mid2
        if (arr[mid1] == target)
            return mid1;
        if (arr[mid2] == target)
            return mid2;

        // Se o valor procurado e menor que o valor que esta em mid1, 
        // procuramos no lado esquerdo de mid1
        if (target < arr[mid1])
            return TSTernarySearch(arr, left, mid1 - 1,target);
        // Se o valor procurado e maior que  
        // mid2, procuramos na direita do subarray 
        else if (target > arr[mid2])
            return TSTernarySearch(arr, mid2 + 1, right,target);
        // Se o valor procurado esta em medio de mid1 e mid2, 
        // procuramos no medio do subarray
        else
            return TSTernarySearch(arr, mid1 + 1, mid2 - 1,target);
    }
    // Se o elemento nao é achado retornamos -1 
    return -1;
}


void TSUsarAlgoritmo()
{
    Gcontador = 0;
    char escolherLista = '0';
    int valor;
    int achado;
    int b;
    CMostarAsListasAscendentes();
    printf(TSescolher);
    while (escolherLista != '1' && escolherLista != '2' && escolherLista != '3' && escolherLista != '4' && escolherLista != '5')
    {
        scanf_s(" %c", &escolherLista, 1);
        switch (escolherLista)
        {
        case '1':
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            achado = TSTernarySearch(Clista1, 0, CTAMANHOLISTAS - 1, valor);
            if (achado != -1)
                printf("O valor procurado %d, tomou %d intenos para achar o valor com o Tenary Search\n\n", valor, Gcontador);
            else
                printf("O valor %d nao foi achado e tomou % intentos para acharlo\n\n", valor, Gcontador);
            
            printf("Agora tentamos com o Binary Search\n");
            achado = BSBuscaBinaria(Clista1, valor, CTAMANHOLISTAS, &b);

            

            if (achado == -1)
                printf("O valor procurado %d nao esta na lista e tomou %d intentos em saber-o\n", valor,b);
            else
                printf("O valor procurado %d esta na posicao %d e to,ou %d intentos em saber-o\n", valor, achado,b);
            

            break;
        case '2':
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            

            achado = TSTernarySearch(Clista2, 0, CTAMANHOLISTAS - 1, valor);

            if (achado != -1)
                printf("O valor procurado %d, tomou %d intenos para achar o valor com o Tenary Search", valor, Gcontador);
            else
                printf("O valor %d nao foi achado e tomou % intentos para acharlo", valor, Gcontador);

            

            printf("Agora tentamos com o Binary Search\n");
            achado = BSBuscaBinaria(Clista2, valor, CTAMANHOLISTAS, &b);

            if (achado == -1)
                printf("O valor procurado %d nao esta na lista e tomou %d intentos em saber-o\n", valor, b);
            else
                printf("O valor procurado %d esta na posicao %d e to,ou %d intentos em saber-o\n", valor, achado, b);


            break;
        case '3':
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            achado = TSTernarySearch(Clista3, 0, CTAMANHOLISTAS - 1, valor);

            if (achado != -1)
                printf("O valor procurado %d, tomou %d intenos para achar o valor com o Tenary Search", valor, Gcontador);
            else
                printf("O valor %d nao foi achado e tomou % intentos para acharlo", valor, Gcontador);

            

            printf("Agora tentamos com o Binary Search\n");
            achado = BSBuscaBinaria(Clista3, valor, CTAMANHOLISTAS, &b);

            if (achado == -1)
                printf("O valor procurado %d nao esta na lista e tomou %d intentos em saber-o\n", valor, b);
            else
                printf("O valor procurado %d esta na posicao %d e to,ou %d intentos em saber-o\n", valor, achado, b);

            
            break;
        case '4':
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            achado = TSTernarySearch(Clista4, 0, CTAMANHOLISTAS - 1, valor);

            if (achado != -1)
                printf("O valor procurado %d, tomou %d intenos para achar o valor com o Tenary Search", valor, Gcontador);
            else
                printf("O valor %d nao foi achado e tomou % intentos para acharlo", valor, Gcontador);

            

            printf("Agora tentamos com o Binary Search\n");
            achado = BSBuscaBinaria(Clista4, valor, CTAMANHOLISTAS, &b);

            if (achado == -1)
                printf("O valor procurado %d nao esta na lista e tomou %d intentos em saber-o\n", valor, b);
            else
                printf("O valor procurado %d esta na posicao %d e to,ou %d intentos em saber-o\n", valor, achado, b);


            break;
        case '5':
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            achado = TSTernarySearch(Clista5, 0, CTAMANHOLISTAS - 1, valor);

            if (achado != -1)
                printf("O valor procurado %d, tomou %d intenos para achar o valor com o Tenary Search", valor, Gcontador);
            else
                printf("O valor %d nao foi achado e tomou % intentos para acharlo", valor, Gcontador);

            

            printf("Agora tentamos com o Binary Search\n");
            achado = BSBuscaBinaria(Clista5, valor, CTAMANHOLISTAS, &b);

            if (achado == -1)
                printf("O valor procurado %d nao esta na lista e tomou %d intentos em saber-o\n", valor, b);
            else
                printf("O valor procurado %d esta na posicao %d e to,ou %d intentos em saber-o\n", valor, achado, b);



            achado = BSBuscaBinaria(Clista5, valor, CTAMANHOLISTAS, &b);
            break;
        default:
            printf("Por favor escolhe uma lista corretamente\n->");
            break;
        }
    }
    
    printf("\n\n\n");
}

void TSExplicao()
{

    printf("O algoritmo do Ternary Search serve para uma maior eficiencia do tempo em buscas de listas ordenadas muito grandes,\n");
    printf("mas o ruim do algoritmo precisa de muitos recurso do PC e sua implementacao e um pouco dificil.\n");
}



