#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

	
typedef struct 
{
	char id[MAX];
	char nome[MAX];
	char tipo[MAX];
	char modelo[MAX];
	char cor[MAX];
	char preco[MAX];
	char qnt[MAX];

}Acessorio;

Acessorio acessorio;

int menu(void)
{
	int opcao;

	printf("\n(1) - Cadastrar Acessorio\n");
	printf("\n(2) - Listar Todos os Acessorios\n");
	printf("\n(3) - Editar cadastro de Acessorio previamente cadastrado\n");
	printf("\n(4) - Deletar Acessorio pré-cadastrados\n");
	printf("\n(5) - Buscar Pelo Modelo\n");
	printf("\n(6) - Buscar Pelo Nome\n");
	printf("\n(7) - Buscar Acessorio Por ID\n");
	printf("\n(8) - Buscar Pelo Tipo\n");
	printf("\n(9) - Sair\n");
	scanf ("%d", &opcao);

	if (opcao > 9 || opcao <= 0)
	{
		printf("\n Insira um Comando Válido\n");
		scanf ("%d", &opcao);			
	}	

	else if (opcao == 1)
	{
		printf("\nVocê está Cadastrando Acessorios\n");

	}

	else if (opcao == 2)
	{
		printf("\nLista de Todos os Acessorios Cadastrados\n");
	}

	else if (opcao == 3)
	{
		printf("\nEditar produtos Cadastrado\n");
	}

	else if (opcao == 4)
	{
		printf("\nDeletar Produtos Cadastrados\n");
	}

	else if (opcao == 5)
	{
		printf("\n-- Busca por Modelo --\n" );
	}

	else if (opcao == 6)
	{
		printf("\n-- Busca por Nome --\n");
	}

	else if (opcao == 7)
	{
		printf("\n-- Busca por ID --\n");
	}

	else if (opcao == 8)
	{
		printf("\n-- Busca pelo Tipo --\n");
	}

	else if (opcao == 9)
	{
		printf("\n-- Programa Encerrado --\n");
	}

}



//Função Validar














//Função Cadastrar:

void Cadastro (void)
{
	FILE *Cad;
	int i;

	//ID
	printf("Digite o ID do produto: ");
	scanf("%s", acessorio.id);
	for (i = 0; i < strlen(acessorio.id); i++)
	{
		acessorio.id[i] = toupper(acessorio.id[i]);
	}


	//NOME
	printf("Digite o Nome do produto: ");
	scanf("%s", acessorio.nome);
	for (i = 0; i < strlen(acessorio.nome); i++)
	{
		acessorio.nome[i] = toupper(acessorio.nome[i]);
	}


	//TIPO
	printf("Digite o tipo do produto: ");
	scanf("%s", acessorio.tipo);
	for (i = 0; i < strlen(acessorio.tipo); i++)
	{
		acessorio.tipo[i] = toupper(acessorio.tipo[i]);
	}
	

	//MODELO
	printf("Digite o modelo do produto: ");
	scanf("%s", acessorio.modelo);
	for (i = 0; i < strlen(acessorio.tipo); i++)
	{
		acessorio.modelo[i] = toupper(acessorio.modelo[i]);
	}
	
	//COR
	printf("Digite a cor do produto: ");
	scanf("%s", acessorio.cor);
	for (i = 0; i < strlen(acessorio.tipo); i++)
	{
		acessorio.cor[i] = toupper(acessorio.cor[i]);
	}
	
	
	//PREÇO
	printf("Digite o preço do produto: ");
	scanf("%f", &acessorio.preco);
	
	
	//QUANTIDADE
	printf("Digite a quantidade de itens do produto: ");
	scanf("%s", acessorio.qnt);
	
	Cad = fopen("Cadastro.txt","append")
	
	if (Cad == NULL)
		printf("Erro\n");
	else {
		fwrite(&acessorio, sizeof(acessorio), 1, Cad);

		if (ferror(Cad))
			printf("Erro no Cadastro\n");
		else
			printf("\n Cadastrado com sucesso! \n\n");
	}

	fclose(Cad);
}













int main ()
{
	menu ();

	system ("pause");
	return 0;
}

