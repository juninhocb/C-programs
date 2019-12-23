#include <stdio.h>
#include <string.h>

/*
	Trabalhando com vetores em estrutura de dados
*/

#define TAM 3 

struct st_pessoa { 
	char nome[100];
	char estado[15];
	char profissao[50];
	int idade; 

}pessoas[TAM];


int main (){

	for (int i = 0; i < TAM; i++){
		printf("Informe o nome da pessoa %d: ", i+1);
		fgets(pessoas[i].nome, 100, stdin); 
		printf("Informe o estado da pessoa %d: ", i+1);
		fgets(pessoas[i].estado, 15, stdin);
		printf("Informe a profissão da pessoa %d: ", i+1);
		fgets(pessoas[i].profissao, 50, stdin);
		printf("Informe a idade da pessoa %d: ", i+1);
		scanf("%d", &pessoas[i].idade); 
		fflush(stdin);
	} 
	
	printf(" ========================= DADOS DAS PESSOAS ======================= ");
	
	for (int j = 0; j < TAM; j++){
		printf("\n Pessoa %d \n ", j+1);
		printf("Nome: %s ", pessoas[j].nome);
		printf("Estado: %s ", pessoas[j].estado);
		printf("Profissao: %s ", pessoas[j].profissao);
		printf("Idade: %d ", pessoas[j].idade); 
	}
	

	return 0; 
}
