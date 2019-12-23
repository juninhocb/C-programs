#include <stdio.h>
#include <string.h>

struct st_aluno{
	char matricula[10];
	char nome[100];
	char curso [50];
	int ano_nascimento;
}aluno1, aluno2;



int main () {

	struct st_aluno aluno3;
	
	printf("Para o aluno 2 teste, informe o nome do curso:");
	fgets(aluno2.curso, 50, stdin);
	printf("Curso do aluno 2 %s", aluno2.curso);

	printf("Informe a matrícula do aluno: ");
	fgets(aluno3.matricula, 10, stdin); // STDIN = teclado

	printf("Informe o nome do aluno: ");
	fgets(aluno3.nome, 100, stdin);

	printf("Informe o curso do aluno: ");
	fgets(aluno3.curso, 50, stdin);

	printf("Infome o ano de nascimento do aluno: ");
	scanf("%d", &aluno3.ano_nascimento);
	
	aluno1.ano_nascimento = 1992;
	printf("Aluno1 was born in %d \n", aluno1.ano_nascimento);

	printf(" ========== DADOS DO ALUNO =========== ");
	printf("\n Matricula: %s", aluno3.matricula);
	printf("Nome: %s", aluno3.nome);
	printf("Curso: %s", aluno3.curso);
	printf("Ano de Nascimento: %d \n", aluno3.ano_nascimento);

	return 0;
}

