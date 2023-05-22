#include <stdio.h>

int main(){
	int edad = 0;
	printf("Introduce tu edad: ");
	scanf("%d", &edad);
	if (edad >= 0 && edad <= 110){
		if (edad >= 18){
			printf("Es mayor de edad");
		} else {
			printf("Es menor de edad")
		}
	} else {
		printf("Edad invalida");
	}
	return 0;
	}    
}