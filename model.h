#include <stdio.h>
#include <string.h>

#ifndef MODEL_H
#define MODEL_H
#define TAM 20

void criaAluno(char nomeP[100], int n1P, int n2P, int counter); 
bool verificaAprovacao();
int calculaMedia(int n1P, int n2P);



struct caractAluno {
	char nome[100]; 
	float n1; 
	float n2;
	
} Alunos[TAM];  

#endif

