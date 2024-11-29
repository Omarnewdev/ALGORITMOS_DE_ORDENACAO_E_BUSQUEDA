#include"SelectionSort.h"

char SelSortmenu[] = "1.- Usar o algoritmo\n2.-Testar efetividade";


void SelSortSelectionSort(int* arr, int tamanho,int imprimir)
{
	//O algoritmo consiste em procura o valor menor e colocar-o no inicio da lista ate que esteja ordenada
	int i, j,menor;
	int aux;
	for (i = 0; i < tamanho; i++)
	{
		menor = arr[i];
		aux = i;
		for (j = i+1; j < tamanho; j++)
		{
			if (arr[j] < menor)
			{
				menor = arr[j];
				aux = j;
			}
		}

		if (aux != i)
		{
			arr[aux] = arr[i];
			arr[i] = menor;
		}
		if (imprimir != 0)
		{
			printf("Na iteracao %d foi: ", i);
			CAPrintarArrayDeInteiros(arr, tamanho);
		}
	}
}


void SelSortUsarAlgoritmo()
{
	int tamanho;
	int min;
	int max;
	int* arr1;
	
	printf("Criamos a lista para ordenar\n");
	printf("Preciso do tamanho que vai ser o array\n-> ");
	scanf_s(" %d", &tamanho);
	printf("Agora vou precisar dos intervalos (O numero vai ser creado do min ao max)\n");
	printf("Primeiro o intervalo min\n-> ");
	scanf_s(" %d", &min);
	printf("Primeiro o intervalo max\n-> ");
	scanf_s(" %d", &max);
	arr1 = CACriarArrayAoAzar(min, max, tamanho);
	if (arr1 == NULL)
	{
		printf("Nao foi possivel alocar a memoria\n");
		return;
	}
	printf("O array a organizar e: ");
	CAPrintarArrayDeInteiros(arr1, tamanho);
	printf("\n\n");
	SelSortSelectionSort(arr1, tamanho,1);
	printf("\n\nO array ficou:");
	CAPrintarArrayDeInteiros(arr1, tamanho);
	printf("\n\n");
	free(arr1);
}


void SelSortTestandoEfetividadeDoAlgoritmo() 
{
	const int LISTAPEQUENA = 100;
	const int LISTAMEDIANA = 1000;
	const int LISTAENORME = 1000000;
	const int INTERVALOMIN = -3000;
	const int INTERVALOMAX = 3000;
	//listas
	int* list1;
	int* list2;
	int* list3;
	//tempo
	clock_t inicio;
	clock_t fin;
	double tiempo;
	//char
	char o;

	printf("Vamos a criar 3 listas uma com %d elementos outra com %d elementos e a ultima com %d elementos para ver a efetividade do algoritmo\n", LISTAPEQUENA, LISTAMEDIANA, LISTAENORME);
	printf("Os intervalos vao ser desde %d ate %d\n",INTERVALOMIN,INTERVALOMAX);

	list1 = CACriarArrayAoAzar(INTERVALOMIN, INTERVALOMAX, LISTAPEQUENA);
	if (list1 == NULL)
	{
		printf("Nao foi possivel alocar a memoria\n\n");
		return;
	}
	printf("Vamos comecar com a lista pequena com %d elementos\n(Insira um char para continua)-> ",LISTAPEQUENA);
	scanf_s(" %c", &o, 1);

	inicio = clock();

	SelSortSelectionSort(list1, LISTAPEQUENA,0);

	fin = clock();

	tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
	printf("Exatamente tomou %.6f segundo em fazer a ordenacao da lista com %d elementos\n\n",tiempo,LISTAPEQUENA);
	printf("(Insira um char para continua)-> ");
	scanf_s(" %c", &o, 1);
	free(list1);


	//Lista 2
	list2 = CACriarArrayAoAzar(INTERVALOMIN, INTERVALOMAX, LISTAMEDIANA);
	if (list2 == NULL)
	{
		printf("Nao foi possivel alocar a memoria\n\n");
		return;
	}
	printf("Vamos continuar com a lista mediana com %d elementos\n(Insira um char para continua)-> ", LISTAMEDIANA);
	scanf_s(" %c", &o, 1);

	inicio = clock();

	SelSortSelectionSort(list2, LISTAMEDIANA,0);

	fin = clock();

	tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
	printf("Exatamente tomou %.6f segundo em fazer a ordenacao da lista com %d elementos\n\n", tiempo, LISTAMEDIANA);
	printf("(Insira um char para continua)-> ");
	scanf_s(" %c", &o, 1);
	free(list2);


	//Lista 3
	list3 = CACriarArrayAoAzar(INTERVALOMIN, INTERVALOMAX, LISTAENORME);
	if (list3 == NULL)
	{
		printf("Nao foi possivel alocar a memoria\n\n");
		return;
	}
	printf("Vamos continuar com a lista enorme com %d elementos\n(Insira um char para continua)-> ", LISTAENORME);
	scanf_s(" %c", &o, 1);

	inicio = clock();

	SelSortSelectionSort(list3, LISTAENORME,0);

	fin = clock();

	tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
	printf("Exatamente tomou %.6f segundo em fazer a ordenacao da lista com %d elementos\n\n", tiempo, LISTAENORME);
	printf("(Insira um char para continua)-> ");
	scanf_s(" %c", &o, 1);
	free(list3);
}