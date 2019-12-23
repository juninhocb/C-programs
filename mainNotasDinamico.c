#include <stdio.h>
#include <string.h>
#include "notas.c"


struct st_aluno { 
	
	char nome[50];
	float n1;
	float n2; 
	
};

int main (){
	// variáveis 
	int aprov, i, TAM, z, j = 0;   
	float media;
	
	printf("Digite o numero de alunos que queres"); 
	scanf("%d ", &TAM); 
	
	 struct st_aluno Alunos = ( int *)malloc(sizeof(int)* TAM); 
	
	for (j ; j < TAM ; j ++){
		printf("Digite o nome do Aluno %d: ", j); 
		fgets(Alunos[j].nome, sizeof(Alunos[j].nome), stdin);
		printf("Digite a nota da P1 do Aluno %d: ", j); 
		scanf("%f", &Alunos[j].n1);
		if (Alunos[j].n1 < 0 || Alunos[j].n1 > 10){
			printf("Nota Invalida, por favor digite uma nota entre 0 - 10");
			exit(1); 
		}
		printf("Digite a nota da P2 do Aluno %d: ", j); 
		scanf("%f", &Alunos[j].n2);
		if (Alunos[j].n2 < 0 || Alunos[j].n2 > 10){
			printf("Nota Invalida, por favor digite uma nota entre 0 - 10");
			exit(1); 
		} 
		fflush(stdin);
	}
	
	printf("============= ALUNOS ================ \n"); 
	for(i ; i < TAM; i ++){
		
		media = obterMedia(Alunos[i].n1,Alunos[i].n2);
		aprov = verfAprovacao(media);
		
		if (aprov == 1){
			printf("Aluno %s [APROVADO], com media %.1f \n", Alunos[i].nome, media); 
		} else {
			
			printf("Aluno %s [REPROVADO], com media %.1f \n", Alunos[i].nome, media);
		}
	}
		
	
	
	return 0;
}
