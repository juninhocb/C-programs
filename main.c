#include <stdio.h>
#include "foobar.c"

int main (){
	printf("%d\n", foo(2));
	printf("%d\n", foo(2));
	baz = 3; 
	printf("%d\n", foo(2)); 
}
