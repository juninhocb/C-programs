#include <stdio.h>
#include <string.h>

/*
	Trabalhando com estrutura de dados dentro de estrutura de dados 
*/

#define TAM 3 

struct st_pessoa { 
	char nome[100];
	char estado[15];
	char profissao[50];
	int idade; 

};

struct st_funcionarios { 
	int salario; 
	struct st_pessoa pessoas; 
	
}funcionarios[TAM];



int main (){

	for (int i = 0; i < TAM; i++){
		printf("Informe o nome do funcionario %d: ", i+1);
		fgets(funcionarios[i].pessoas.nome, 100, stdin); 
		printf("Informe o estado do funcionario %d: ", i+1);
		fgets(funcionarios[i].pessoas.estado, 15, stdin);
		printf("Informe a profissão do funcionario %d: ", i+1);
		fgets(funcionarios[i].pessoas.profissao, 50, stdin);
		printf("Informe a idade do funcionario %d: ", i+1);
		scanf("%d", &funcionarios[i].pessoas.idade); 
		printf("Informe o salario do funcionario %d: ", i+1);
		scanf("%d", &funcionarios[i].salario);
		fflush(stdin);
	} 
	
	printf(" ========================= DADOS DOS FUNCIONARIOS =======================  \n");
	
	for (int j = 0; j < TAM; j++){
		printf("\n Funcionario %d \n ", j+1);
		printf("Nome: %s ", funcionarios[j].pessoas.nome);
		printf("Estado: %s ", funcionarios[j].pessoas.estado);
		printf("Profissao: %s ", funcionarios[j].pessoas.profissao);
		printf("Salario: R$%d,00 BRL", funcionarios[j].salario);
		printf("\n Idade: %d \n", funcionarios[j].pessoas.idade); 
	}
	

	return 0; 
}
