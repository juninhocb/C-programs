#include "notas.h"

float obterMedia(float n1,float n2){
	
	return (n1 + n2)/ 2; 
}
int verfAprovacao(float media) {
	if (media  >= 6){
		return 1; 
	} else {
		return 0; 
	}
	
}

