#include <stdio.h>

int main(){
	int edad = 0;
	printf("Introduce tu edad: ");
	scanf("%d", &edad);
	if (edad >= 0 && edad <= 110){
		if (edad >= 18){
			printf("%d Es mayor de edad",edad);
		} else {
			printf("%d Es menor de edad",edad);
		}
	} else {
		printf("Edad invalida");
	}
	return 0;
}