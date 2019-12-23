#include <stdio.h> 
#include  "ponto.c"


int main (){ 
	
	Ponto* p1 = cria(3, 5);   
	printf("O valor x da estrutura %.2f\n", p1->x);
	printf("O valor y da estrutura %.2f\n", p1 ->y);
	atribui (p1, 6, 8); 
	printf("O valor x da estrutura alterada %.2f\n", p1->x);
	printf("O valor y da estrutura alterada %.2f\n", p1 ->y);
	Ponto* p2 = cria (4, 5); 
	printf("O valor x da estrutura 2 %.2f\n", p2->x);
	printf("O valor y da estrutura 2 %.2f\n", p2 ->y);	
	printf("A distância entre os pontos eh de: %f\n", distancia(p1, p2));
	
	acessa(p1 , &p1->x, &p1->y);  
	
	// a partir da nova funcao criada, iremos mudar os valores do ponto 3 para 3 e 5. 
	Ponto* p3 = cria(4 , 2); 
	printf("O Valor de x da Estrutura do ponto 3 eh %.2f\n", p3->x);
	printf("O valor de y da Estrutura do ponto 3 eh %.2f\n", p3->y); 
	
	modificar2 (&p3->x, &p3->y); 
	printf("O Valor de x da Estrutura do ponto 3 eh %.2f\n", p3->x);
	printf("O valor de y da Estrutura do ponto 3 eh %.2f\n", p3->y); 
	
	 
	
	libera (p1);
	
	return 0; 
}

