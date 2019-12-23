#include <stdio.h>

struct st_ponto { 
	float x; 
	float y;
};

Ponto* cria (float x, float y){ 

	Ponto* p = (Ponto*)malloc(sizeof(Ponto)); 
	if (p == NULL){
		printf("Memoria insuficiente! \n");
		exit(1);
	}
	p->x = x; 
	p->y = y;
	return p;	
}

void libera (Ponto* p){
	free(p);
}


