#include <stdio.h>

/*
	0   1   2   3   4 
  *---------------------
  * 1 | 2 | 3 | 4 | 5 |
  *----------------------
  * int = 4 Bytes   
  * bit 0 / 1 
  * byte 0000 0001
  * 0000 0000 0000 0000 0000 0000 0000 0001 representa��o nmr 1
  * 0000 0000 0000 0000 0000 0000 0000 0010 representa��o nmr 2
*/

int main (){ 
	int valores[5] = { 1, 2 , 3 ,3 ,5}; 
	int *ptr;
	int a = 3; 
		
	ptr = &a; //o ponteiro est� apontando para A 
	printf("Valor do ptr que est� apontando para A vale %p", *ptr); 
	
	for(int i =0; i< 5; i++){
		printf("O valor %d tem %ld bytes \n", valores[i], sizeof(valores[i]));
	}
	printf("O array valores possui %ld bytes", sizeof(valores));
	
	// %p pega o valor do ponteiro e n�o o endere�o de mem�ria
	
	printf("valores[0] vale %d e o endere�o de mem�ria eh %p \n", valores[0], valores[0]);
	printf("Valores[0] vale %d e o endere�o de mem�ria eh %d \n", &valores[0], &valores[0]);
	printf("*(valores) vale %d e endere�o de mem�ria eh %p \n", *(valores), *(valores));
	printf("*(valores+1) vale %d e endere�o de mem�ria eh %p \n", *(valores+1), *(valores+1));
	printf("*(valores+2) vale %d e endere�o de mem�ria eh %p \n", *(valores+2), *(valores+2));
	printf("*(valores+3) vale %d e endere�o de mem�ria eh %p \n", *(valores+3), *(valores+3));
	printf("*(valores+4) vale %d e endere�o de mem�ria eh %p \n", *(valores+4), *(valores+4));
		
	return 0;
}
