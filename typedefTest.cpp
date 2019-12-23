#include <stdio.h>
#include <string.h>

struct pessoa { 
	char nome[50]; 
	int idade; 
};

//typedef struct pessoa Pessoa; 


int main (){
	int i;  
    //Pessoa p[2];  // cria um vetor de 3 pessoas COM Typedef 
	struct pessoa p[3]; // cria o vetor SEM Typedef 
	printf("A estrutura Pessoa ocupa %ld Bytes.\n", sizeof(p));
	p[0].idade = 14;
	p[1].idade = 27; 
	p[2].idade = 22;
	strcpy (p[0].nome, "Carlos");
	strcpy (p[1].nome, "Joao"); 
	strcpy (p[2].nome, "Ferreira");  
	for (i; i < 3 ; i ++){
		printf("Pessoa %d === NOME: %s  e IDADE: %d ===\n", i, p[i].nome, p[i].idade); 
	}

	return 0; 
}
