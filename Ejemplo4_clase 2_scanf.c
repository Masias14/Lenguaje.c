#include <stdio.h>
#include <math.h>
int main(){
	float numero,raiz;
	printf("Introduzca el numero a buscar su raiz: ");
	scanf("%g",&numero);
	raiz=sqrt(numero);
	printf("La raiz de %g es %g",numero,raiz);
	return 0;
}