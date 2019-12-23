#include <stdio.h>
#include <string.h>
#include "model.h"


int main (){ 
	
	// Variáveis
	//struct aluno1; 
	
	//criaAluno("Nome", 3, 4, 1);
	
	int x = calculaMedia( 3, 2);
	
	//printf("A Média do aluno é de %d ", aluno1.media);
	
	if (verificaAprovacao()){ 
		printf(" \n Aluno Aprovado");
	}else { 
		printf("Aluno Reprovadi");
	}
	
	return 0; 
}
