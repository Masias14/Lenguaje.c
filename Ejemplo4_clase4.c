#include <stdio.h>

int main(){
	float numero1,numero2,resultado;
	int opcion;
	do {
		printf("Seleccione la opcion a utilizar: \n");
		printf("[1] Sumar dos numeros\n");
		printf("[2] Restar dos numeros\n");
		printf("[3] Multiplicar dos numeros\n");
		printf("[4] Dividir dos numeros\n");
		printf("[5] Salir\n");
		scanf("%d",&opcion);
		switch(opcion){
			case 1: // si opcion = 1
				printf("Introduzca el numero 1: ");
				scanf("%g",&numero1);
				printf("Introduzca el numero 2: ");
				scanf("%g",&numero2);
				resultado = numero1 + numero2;
				printf("%g + %g = %g\n",numero1,numero2,resultado);
				break;
			case 2: // si opcion = 2
				printf("Introduzca el numero 1: ");
				scanf("%g",&numero1);
				printf("Introduzca el numero 2: ");
				scanf("%g",&numero2);
				resultado = numero1 - numero2;
				printf("%g - %g = %g\n",numero1,numero2,resultado);
				break;
			case 3: // si opcion = 3
				printf("Introduzca el numero 1: ");
				scanf("%g",&numero1);
				printf("Introduzca el numero 2: ");
				scanf("%g",&numero2);
				resultado = numero1 * numero2;
				printf("%g * %g = %g\n",numero1,numero2,resultado);
				break;
			case 4: // si opcion = 4
				printf("Introduzca el numero 1: ");
				scanf("%g",&numero1);
				printf("Introduzca el numero 2: ");
				scanf("%g",&numero2);
				resultado = numero1 / numero2;
				printf("%g / %g = %g\n",numero1,numero2,resultado);
				break;
			case 5: // si opcion = 5
				printf("\n\n¡Hasta luego!");
				break;				
			default: // si opcion !1,2,3,4,5
				printf("Opcion invalida");
				break;
		}
	} while (opcion != 5);
	return 0;
}
