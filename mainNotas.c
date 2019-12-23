#include <stdio.h>
#include <string.h>
#include "notas.c"

#define TAM 5

struct st_aluno { 
	
	char nome[50];
	float n1;
	float n2; 
	
}Alunos[TAM];

int main (){
	// variáveis 
	int aprov, i= 0;
	int j = 2;  
	float media;
	
	// declaração dos alunos
	Alunos[0].n1 = 2; 
	Alunos[0].n2 = 10;
	strcpy (Alunos[0].nome, "Sivanildo"); 
	
	Alunos[1].n1 = 5; 
	Alunos[1].n2 = 2;
	strcpy (Alunos[1].nome, "Alberto");
	
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
