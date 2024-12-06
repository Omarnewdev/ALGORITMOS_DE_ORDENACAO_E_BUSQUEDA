
#include "Varios.h"

const char* livros[] = {
    // Livros com "A"
    "Amanhecer Silva 2023",
    "Amor Eterno Pereira 2018",
    "Anatomia Humana Santos 2015",
    "Antartida Oliveira 2010",
    "Arte Moderna Costa 2021",
    // Livros com "B"
    "Bailando Com Estrelas Souza 2022",
    "Beleza Oculta Lima 2019",
    "Biologia Molecular Almeida 2016",
    "Brilhante Horizonte Carvalho 2013",
    "Boa Vida Rodrigues 2017",
    // Livros com "C"
    "Caminhos Cruzados Martins 2018",
    "Cantos Da Alma Rocha 2020",
    "Cartas Perdidas Ribeiro 2021",
    "Ciencia E Tecnologia Fernandes 2015",
    "Cinema Classico Araujo 2012",
    // Livros com "D"
    "Danca No Escuro Mendes 2023",
    "Destino Inesperado Faria 2019",
    "Descobertas Antigas Cardoso 2017",
    "Diario Secreto Moreira 2021",
    "Doce Infancia Barbosa 2018",
    // Livros com "E"
    "Ecos Do Passado Batista 2020",
    "Encantos Da Noite Melo 2016",
    "Energia Renovavel Vasconcelos 2015",
    "Estrelas Cadentes Vieira 2022",
    "Experiencias Unicas Cunha 2023",
    // Livros com "F"
    "Filosofia Antiga Pires 2018",
    "Florestas Tropicais Nascimento 2017",
    "Flores Do Campo Freitas 2020",
    "Fragmentos De Memorias Neves 2016",
    "Frutos Do Amor Tavares 2019",
    // Livros com "G"
    "Gastronomia Brasileira Teixeira 2018",
    "Geografia Mundial Ribeiro 2015",
    "Grandes Conquistas Monteiro 2019",
    "Guia Do Universo Almeida 2021",
    "Guerras E Paz Cavalcanti 2017",
    // Livros com "H"
    "Historias Fantasticas Fonseca 2023",
    "Horizonte Azul Moreira 2020",
    "Humanidade E Ciencia Barros 2015",
    "Homenagem Ao Tempo Pacheco 2018",
    "Harmonia Interior Lima 2019",
    // Livros com "I"
    "Ilha Dos Sonhos Santos 2017",
    "Impactos Ambientais Vieira 2021",
    "Imagens Do Futuro Rocha 2023",
    "Imperio Perdido Castro 2016",
    "Inspiracao Criativa Oliveira 2022",
    // Livros com "J"
    "Janelas Da Alma Mendes 2020",
    "Jardins Secretos Nogueira 2015",
    "Jornadas Extraordinarias Freitas 2017",
    "Juventude Rebelde Tavares 2023",
    "Justica E Liberdade Cardoso 2019",
    // Livros com "L"
    "Lagrimas Do Ceu Costa 2021",
    "Lendas Brasileiras Almeida 2016",
    "Liberdade Em Movimento Barbosa 2020",
    "Luzes Na Escuridao Pires 2018",
    "Luz Do Amanha Ferreira 2023",
    // Livros com "M"
    "Magia Do Amor Vasconcelos 2017",
    "Maravilhas Do Mundo Cunha 2019",
    "Memorias Esquecidas Ribeiro 2022",
    "Misterios Da Noite Teixeira 2015",
    "Montanhas Distantes Araujo 2020",
    // Livros com "N"
    "Natureza Viva Mendes 2023",
    "Noite Das Estrelas Vieira 2018",
    "Novos Horizontes Souza 2021",
    "Nuvens Do Passado Silva 2016",
    "Numeros Magicos Oliveira 2017",
    // Livros com "O"
    "Oceano Azul Nascimento 2015",
    "Olhares Perdidos Rocha 2020",
    "Ondas Do Tempo Ribeiro 2018",
    "Ouro Antigo Barros 2022",
    "Ousadia Criativa Batista 2023",
    // Livros com "P"
    "Paisagens Incriveis Neves 2021",
    "Passado E Presente Freitas 2016",
    "Pensamentos Profundos Cavalcanti 2020",
    "Poesia Brasileira Monteiro 2018",
    "Portas Do Infinito Moreira 2022",
    // Livros com "Q"
    "Quem Somos Nos Almeida 2019",
    "Quimica Avancada Santos 2021",
    "Quebra-Cabecas Moderno Lima 2018",
    "Quietude Da Alma Tavares 2020",
    "Questao De Tempo Ribeiro 2017",
    // Livros com "R"
    "Raios De Sol Cunha 2023",
    "Razao E Emocao Oliveira 2019",
    "Redes Sociais Modernas Batista 2022",
    "Riquezas Do Passado Monteiro 2016",
    "Ritmos Do Mundo Freitas 2021",
    // Livros com "S"
    "Sabedoria Antiga Vieira 2018",
    "Saude E Bem-Estar Almeida 2023",
    "Segredos Da Terra Nascimento 2017",
    "Simplesmente Amor Mendes 2020",
    "Sonhos Distantes Rocha 2016",
    // Livros com "T"
    "Tardes De Verano Teixeira 2021",
    "Teoria Das Cores Vasconcelos 2015",
    "Tesouros Perdidos Cavalcanti 2018",
    "Trilhas Secretas Silva 2023",
    "Tudo E Possivel Moreira 2022"
};



void static imprimirLinha()
{
	int i;
	for ( i = 0; i < 40 ; i++)
	{
		printf("-");
	}
	printf("\n");
}

void VComparcaoDeAlgoritmosDeBusqueda()
{
    clock_t inicio;
    clock_t fin;

    double tiempo;
    char escolherLista = '0';
    int valor;
    int achado;
    int b;
    CMostarAsListasAscendentesMaiores();
    printf(BSescolher);
    while (escolherLista != '1' && escolherLista != '2' && escolherLista != '3' && escolherLista != '4' && escolherLista != '5')
    {
        scanf_s(" %c", &escolherLista, 1);
        switch (escolherLista)
        {
        case '1':
            //BINARY SEARCH
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            inicio = clock();
            achado = BSBuscaBinaria(Clista1M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("BUSCA BINARIA\t| %.6f\t|\n",tiempo);
            //Exponential Search
            imprimirLinha();
            inicio = clock();
            achado = ESExponentialSearch(Clista1M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("EXPONENTIAl SEARCH\t| %.6f\t|\n",tiempo);
            imprimirLinha();
            //Ternary Search
            inicio = clock();
            achado = TSTernarySearch(Clista1M,0,CTAMANHOLISTASMAIOR-1,valor);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("TERNARY SEARCH\t| %.6f\t|\n",tiempo);
            imprimirLinha();
            //JUMP SEARCH
            inicio = clock();
            achado = JSJumpSearch(Clista1M,valor,CTAMANHOLISTASMAIOR,&b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("JUMP SEARCH\t| %.6f\t|\n",tiempo);
            imprimirLinha();
            //INTERPOLATION SEARCH
            inicio = clock();
            achado = ISInterpolationSearch(Clista1M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("INTERPOLATION SEARCH\t| %.6f\t|\n",tiempo);
            imprimirLinha();


            break;
        case '2':
            //BINARY SEARCH
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            inicio = clock();
            achado = BSBuscaBinaria(Clista2M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("BUSCA BINARIA\t| %.6f\t|\n", tiempo);
            //Exponential Search
            imprimirLinha();
            inicio = clock();
            achado = ESExponentialSearch(Clista2M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("EXPONENTIAl SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();
            //Ternary Search
            inicio = clock();
            achado = TSTernarySearch(Clista2M, 0, CTAMANHOLISTASMAIOR - 1, valor);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("TERNARY SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();
            //JUMP SEARCH
            inicio = clock();
            achado = JSJumpSearch(Clista2M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("JUMP SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();
            //INTERPOLATION SEARCH
            inicio = clock();
            achado = ISInterpolationSearch(Clista2M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("INTERPOLATION SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();
            break;


        case '3':
            //BINARY SEARCH
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            inicio = clock();
            achado = BSBuscaBinaria(Clista3M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("BUSCA BINARIA\t| %.6f\t|\n", tiempo);
            //Exponential Search
            imprimirLinha();
            inicio = clock();
            achado = ESExponentialSearch(Clista3M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("EXPONENTIAl SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();
            //Ternary Search
            inicio = clock();
            achado = TSTernarySearch(Clista3M, 0, CTAMANHOLISTASMAIOR - 1, valor);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("TERNARY SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();
            //JUMP SEARCH
            inicio = clock();
            achado = JSJumpSearch(Clista3M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("JUMP SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();
            //INTERPOLATION SEARCH
            inicio = clock();
            achado = ISInterpolationSearch(Clista3M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("INTERPOLATION SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();

            break;
        case '4'://BINARY SEARCH
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            inicio = clock();
            achado = BSBuscaBinaria(Clista4M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("BUSCA BINARIA\t| %.6f\t|\n", tiempo);
            //Exponential Search
            imprimirLinha();
            inicio = clock();
            achado = ESExponentialSearch(Clista4M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("EXPONENTIAl SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();
            //Ternary Search
            inicio = clock();
            achado = TSTernarySearch(Clista4M, 0, CTAMANHOLISTASMAIOR - 1, valor);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("TERNARY SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();
            //JUMP SEARCH
            inicio = clock();
            achado = JSJumpSearch(Clista4M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("JUMP SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();
            //INTERPOLATION SEARCH
            inicio = clock();
            achado = ISInterpolationSearch(Clista4M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("INTERPOLATION SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();

            break;
        case '5'://BINARY SEARCH
            printf("Insira o valor que quer procurar\n->");
            scanf_s(" %d", &valor);
            inicio = clock();
            achado = BSBuscaBinaria(Clista5M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("BUSCA BINARIA\t| %.6f\t|\n", tiempo);
            //Exponential Search
            imprimirLinha();
            inicio = clock();
            achado = ESExponentialSearch(Clista5M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("EXPONENTIAl SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();
            //Ternary Search
            inicio = clock();
            achado = TSTernarySearch(Clista5M, 0, CTAMANHOLISTASMAIOR - 1, valor);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("TERNARY SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();
            //JUMP SEARCH
            inicio = clock();
            achado = JSJumpSearch(Clista5M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("JUMP SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();
            //INTERPOLATION SEARCH
            inicio = clock();
            achado = ISInterpolationSearch(Clista5M, valor, CTAMANHOLISTASMAIOR, &b);
            fin = clock();
            tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
            imprimirLinha();
            printf("INTERPOLATION SEARCH\t| %.6f\t|\n", tiempo);
            imprimirLinha();

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

void VComplexidadeDosAlgoritmos()
{   
    printf("\n\n");
    printf("|----------------------------------------------------------|\n");
    printf("|Algoritmo              | Melhor caso         | Pior caso  |\n");
    printf("|----------------------------------------------------------|\n");
    printf("|Ternary Search         | O(log n)          | O(log n)     |\n");
    printf("|----------------------------------------------------------|\n");
    printf("|Binary Search          | O(log n)          | O(log n)     |\n");
    printf("|----------------------------------------------------------|\n");
    printf("|Interpolation Search   | O(log log n)      | O(n)         |\n");
    printf("|----------------------------------------------------------|\n");
    printf("|Jump Search            | O(√n)             | O(√n)        |\n");
    printf("|----------------------------------------------------------|\n");
    printf("|Exponential Search     | O(log n)          | O(log n)     |\n");
    printf("|----------------------------------------------------------|\n");
    printf("|Shell Sort             | O(n log n)        | O(n^2)       |\n");
    printf("|----------------------------------------------------------|\n");
    printf("|Merge Sort             | O(n log n)        | O(n log n)   |\n");
    printf("|----------------------------------------------------------|\n");
    printf("|Selection Sort         | O(n^2)            | O(n^2)       |\n");
    printf("|----------------------------------------------------------|\n");
    printf("|Bucket Sort            | O(n + k)          | O(n^2)       |\n");
    printf("|----------------------------------------------------------|\n");
    printf("|Radix Sort             | O(nk)             | O(nk)        |\n");
    printf("|----------------------------------------------------------|\n");
    printf("|Quick Sort             | O(n log n)        | O(n^2)       |\n");
    printf("|----------------------------------------------------------|\n");
    printf("\n\n");
}







