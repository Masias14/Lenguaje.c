#include <stdio.h>
#include <math.h>
int main(){
	float const Pi=3.14159;
	float area,radio;
	printf("Introduzca el radio del circulo: ");
	scanf("%g",&radio);
	area=Pi*radio*radio;
	printf("El area del circulo es %g",area);
	return 0;
}