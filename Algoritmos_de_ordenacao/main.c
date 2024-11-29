/*
* Autor: Erlan Omar Arce Vasquez
* 
* É um projeto que estou fazendo para o curso de Ciências da Computação no qual temos que explorar
* algums dos mais famoso algoritmos de busca e de ordenação
* 
* --Módulos--
* Cada módulo tem um nome único e as variaveis e suas funções começam com a primeira ou as duas primeiras letras
* do Módulo
* 

*/


#include"Constantes.h"
#include"BinarySearch.h"
#include"InterpolationSearch.h"
#include"JumpSearch.h"
#include"ExponentialSearchh.h"
#include"ShellSort.h"
#include"MergeSort.h"
#include"SelectionSort.h"
#include"BucketSort.h"

int main()
{
	char opcao = '0';
	char o;
	
	while (1)
	{	
		printf(Cmenu);
		printf("Escolhe que exercicio da lista quer ver\n->");

		scanf_s(" %c", &opcao,1);
		switch (opcao)
		{
			case '1':
				printf(BSmenu);
				scanf_s(" %c", &o, 1);
				if (o == '1')
				{
					BSUsarAlgoritmo();
				}
				else if (o == '2')
				{
					BSPorqueListasOrdenadas();
				}
				else
				{
					printf("Escolhe corretamente a opcao");
				}
				break;
			case '2':
				printf(ISmenu);
				scanf_s(" %c", &o, 1);
				if (o == '1')
				{
					ISusarAlgoritmo();
				}
				else if (o == '2')
				{
					IStesteComBinarySearch();
				}
				break;
			case '3':
				printf(JSmenu);
				scanf_s(" %c", &o, 1);
				if (o == '1')
				{
					JSUsarAlgoritmo();
				}
				else if(o == '2')
				{
					JSMedindoOTempo();
				}
				break;
			case '4':
				printf(ESmenu);
				scanf_s(" %c", &o, 1);
				if (o == '1')
				{
					ESUsarAlgoritmo();
				}
				else if (o == '2')
				{
					ESAnaliseDoAlgoritmo();
				}
				break;
			case '5':
				printf(SSortmenu);
				scanf_s(" %c", &o, 1);
				if (o == '1')
				{
					SSortUsarAlgoritmo();
				}
				else if (o == '2')
				{
					SSortExplicacao();
				}
				break;
			case '6':
				printf(MSortmenu);
				scanf_s(" %c", &o, 1);
				if (o == '1')
				{
					MSortUsarAlgoritmo();
				}
				else if(o =='2')
				{
					MSortUsarAlgoritmoStrings();
				}
				break;
			case '7':
				printf(SelSortmenu);
				scanf_s(" %c", &o, 1);
				if (o == '1')
				{
					SelSortUsarAlgoritmo();
				}
				else if (o == '2')
				{
					SelSortTestandoEfetividadeDoAlgoritmo();
				}
				break;
			case '8':
				printf(BuSortmenu);
				scanf_s(" %c", &o, 1);
				if (o == '1')
				{
					BuSortUsarAlgoritmo();
				}
				break;
			default:
				printf("Por favor insire um valor correto\n");
				break;
		}
	}

}