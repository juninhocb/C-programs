#include <stdio.h>

void alteraValor(int* p){
	// criamos ent�o um ponteiro que ir� apontar para o endere�o de mem�ria de X passasdo por par�emtros
	// ap�s obtermos o endere�o, o ponteiro poder� modificar/acessar o valor situado em X 
	int mudar; 
	printf("Por favor, digite o valor que deseja inseir na variavel X: "); 
	scanf("%d", &mudar); 
	
	*p = mudar; // agora o apontador simplesmente passa a apontar para o valor atribuido pelo usuario..
	printf("Podemo acessar ao valor do ponteiro!! %d\n", *p);  
}


int main (){
	
	int x = 3;
	printf("Valor atual de X instanciado eh de %d\n", x); 
	
	alteraValor(&x); // passaremos por par�metro da fun��o o endere�o a onde se encontra a vari�vel X  
	printf("O valor atual de X eh: %d\n", x);
		
	
	return 0;	
}
