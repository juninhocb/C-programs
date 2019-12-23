#include "foobar.h"

int baz; 

int foo(long arg){
	baz += arg; 
	return baz + bar() - 2; 
}

int bar (void){
	return 4; 
}
