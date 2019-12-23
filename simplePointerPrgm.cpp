#include <stdio.h>

void alteraValor(int* p){
	// criamos então um ponteiro que irá apontar para o endereço de memória de X passasdo por parâemtros
	// após obtermos o endereço, o ponteiro poderá modificar/acessar o valor situado em X 
	int mudar; 
	printf("Por favor, digite o valor que deseja inseir na variavel X: "); 
	scanf("%d", &mudar); 
	
	*p = mudar; // agora o apontador simplesmente passa a apontar para o valor atribuido pelo usuario..
	printf("Podemo acessar ao valor do ponteiro!! %d\n", *p);  
}


int main (){
	
	int x = 3;
	printf("Valor atual de X instanciado eh de %d\n", x); 
	
	alteraValor(&x); // passaremos por parâmetro da função o endereço a onde se encontra a variável X  
	printf("O valor atual de X eh: %d\n", x);
		
	
	return 0;	
}
