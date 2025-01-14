#include "Constantes.h"

char Cmenu[] = "1.- Binary Search\n2.- Interpolation Search\n3.- Jump Search\n4.- Exponential Search\n5.- Shell Sort\n6.- Merge Sort\n7.- Selection Sort\n8.- Bucket Sort\n9.- Radix Sort\nA.- Quick Sort\nB.- Ternary Search\nC.- Tabela Comparativa Algoritmos de Busqueda\nE.- Tabela Comparativa de Complexidade dos Algoritmos\n" ;

const int CTAMANHOLISTAS = 20;
const int CTAMANHOLISTASMAIOR = 50;

//Com tamnaho de CTAMANHOLISTAS
int Clista1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
int Clista2[] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100 };
int Clista3[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40 };
int Clista4[] = { 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289, 324, 361, 400 };
int Clista5[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39 };

//Com tamnho de CTAMANHOLISTASMAIOR
int Clista1M[] = { 3, 15, 29, 37, 42, 56, 63, 74, 85, 94, 101, 113, 128, 134, 149, 156, 167, 172, 185, 193, 209, 216, 228, 234, 245, 257, 269, 274, 289, 297, 308, 316, 324, 339, 347, 358, 369, 374, 385, 396, 408, 412, 429, 437, 445, 456, 469, 478, 489, 499 };
int Clista2M[] = { -567, -532, -501, -479, -457, -438, -402, -381, -356, -341, -326, -309, -287, -265, -239, -224, -205, -194, -176, -159, -143, -128, -114, -96, -79, -64, -48, -32, -17, 0, 14, 26, 39, 52, 67, 83, 96, 114, 126, 145, 164, 178, 195, 213, 224, 238, 256, 269, 287, 300 };
int Clista3M[] = { -200, -189, -177, -165, -154, -142, -130, -118, -107, -95, -83, -72, -60, -48, -37, -25, -13, -2, 10, 22, 33, 45, 57, 68, 80, 92, 103, 115, 127, 138, 150, 162, 173, 185, 197, 208, 220, 232, 243, 255, 267, 278, 290, 302, 313, 325, 337, 348, 360, 372 };
int Clista4M[] = { -200, -186, -173, -161, -147, -134, -120, -107, -95, -81, -68, -54, -41, -27, -14, 0, 14, 27, 41, 54, 68, 81, 95, 108, 122, 136, 149, 163, 176, 190, 203, 217, 230, 244, 258, 271, 285, 298, 312, 326, 339, 353, 366, 380, 393, 407, 421, 434, 448, 462 };
int Clista5M[] = { -200, -185, -172, -160, -145, -132, -118, -103, -90, -77, -62, -49, -34, -20, -5, 8, 22, 37, 50, 65, 80, 95, 110, 125, 139, 154, 168, 183, 197, 212, 226, 241, 256, 270, 285, 299, 314, 328, 343, 358, 372, 387, 401, 416, 430, 445, 460, 474, 489, 500};


void CMostarAsListasAscendentes()
{
	int i;
	int j = 1;

	while (j <= 5)
	{
		printf("A lista %d tem os valores: ",j);
		for (i = 0; i < CTAMANHOLISTAS; i++)
		{
			if(j==1)printf("%d ",Clista1[i]);
			if(j==2)printf("%d ", Clista2[i]);
			if (j == 3)printf("%d ", Clista3[i]);
			if (j == 4)printf("%d ", Clista4[i]);
			if (j == 5)printf("%d ", Clista5[i]);
		}
		printf("\n");
		j++;
	}
	printf("\n");
}

void CMostarAsListasAscendentesMaiores()
{
	int i;
	int j = 1;

	while (j <= 5)
	{
		printf("A lista %d tem os valores: ", j);
		for (i = 0; i < CTAMANHOLISTASMAIOR; i++)
		{
			if (j == 1)printf("%d ", Clista1M[i]);
			if (j == 2)printf("%d ", Clista2M[i]);
			if (j == 3)printf("%d ", Clista3M[i]);
			if (j == 4)printf("%d ", Clista4M[i]);
			if (j == 5)printf("%d ", Clista5M[i]);
		}
		printf("\n");
		j++;
	}
	printf("\n");
}



void CMostrarUmaLista(int list[], int tamanho)
{
	int i;
	printf("A lista passada tem os valores: ");
	for ( i = 0; i < tamanho; i++)
	{
		printf("%d ",list[i]);
	}
	printf("\n");
}

