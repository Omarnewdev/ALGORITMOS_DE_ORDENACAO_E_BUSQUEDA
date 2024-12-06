#include "CriarArrays.h"


int* CACriarArrayRecebendoDoUsuario(int tamanho)
{
	// Verificamos si el tamaño es válido
	if (tamanho <= 0) return NULL;

	// Asignamos memoria dinámica para el array
	int* novo = (int*)malloc(tamanho * sizeof(int));

	// Verificamos si la memoria fue asignada correctamente
	if (novo == NULL) {
		printf("Error al asignar memoria.\n");
		return NULL;
	}

	int valor;
	for (int i = 0; i < tamanho; i++)
	{
		printf("Digite o valor do elemento %d: ", i);
		scanf_s("%d", &valor);
		novo[i] = valor;
	}
	printf("\n\n");
	return novo; // Retornamos el puntero al array dinámico
}


int* CACriarListaComIntervalo(int intervalos, int tamanho)
{
	int i;
	int s = 0;
	int* arr = (int*)malloc(sizeof(int) * tamanho);
	if (arr == NULL)
	{
		printf("Nao foi possivel alocar a memoria\n");
		return NULL;
	}
	for (i = 0; i < tamanho; i++)
	{
		arr[i] = s;
		s += intervalos;
	}
	return arr;
}

void CAPrintarArrayDeInteiros(int arr[], int tamanho)
{
	for (int i = 0; i < tamanho; ++i) {
		printf("%d  ", arr[i]);
	}
	printf("\n");

}

int* CACriarArrayAoAzar(int min, int max,int tamanho) 
{
	int* arr = (int*)malloc(sizeof(int) * tamanho);
	if (arr == NULL)
	{
		printf("Nao foi possivel alocar a memoria");
		return NULL;
	}
	srand(time(NULL));
	int i;
	
	for (i = 0; i < tamanho; i++)
	{
		arr[i] = (rand() % (max - min)) + min;
	}
	return arr;

}


//Vamos a usar esta funcão para transformar um string dado em Mayusculas

void CAConvertirAMaiusculas(char* str) 
{
	while (*str) {
		*str = toupper((unsigned char)*str);  // Convierte el carácter actual a mayúsculas
		str++;
	}
}

char** CACriarArrayStrings(int tamanho)
{
	// Reserva memoria para el array de punteros
	char** array = (char**)malloc(tamanho * sizeof(char*));
	if (array == NULL) 
	{
		perror("Error al reservar memoria para el array");
		return NULL;
	}

	// Pedir al usuario que ingrese las palabras
	printf("Insira %d palabras:\n", tamanho);
	for (int i = 0; i < tamanho; i++) 
	{
		char buffer[100];  // Buffer temporal para leer cada palabra
		printf("Palavra %d: ", i + 1);
		scanf_s("%99s", buffer, (unsigned)_countof(buffer));   // Leer una palabra, máximo 99 caracteres

		// Reservar memoria para cada palabra y copiarla del buffer
		array[i] = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
		if (array[i] == NULL) {
			perror("Erro ao intentar alocar memoria");
			return NULL;
		}
		strcpy_s(array[i], strlen(buffer) + 1, buffer);   // Copiar la palabra al array
	}

	return array;
}

void CAPrintarArrayDeStrings(char** str, int tamanho)
{
	int i;
	for (i = 0; i < tamanho; i++)
	{
		printf("%s ", str[i]);
	}
	printf("\n");
}


//Punto Flotante

float* CACriarArrayDePuntoFlotanteAoAzar(int min, int max, int tamanho)
{
	float* arr = (float*)malloc(sizeof(float) * tamanho);
	if (arr == NULL)
	{
		printf("Nao foi possivel alocar a memoria");
		return NULL;
	}
	srand(time(NULL));
	int i;

	// Generar números aleatorios de punto flotante
	for (int i = 0; i < tamanho; i++) {
		float scale = rand() / (float)RAND_MAX; // Escala entre 0 y 1
		arr[i] = min + scale * (max - min);    // Ajustar al rango [min, max]
	}
	return arr;
}

//Se decimales é 1 vai printar com 2 decimais e se for 0 nao vaia printar os decimais
void CAPrintarArrayDePuntoFlotante(float arr[], int tamanho,int decimais)
{
	int i;
	for (i = 0; i < tamanho; i++)
	{
		if(decimais)
			printf("%.2f ", arr[i]);
		else
			printf("%.0f ", arr[i]);

	}
	printf("\n");
}



