#include <stdio.h>

int main(){
	int dia = 0;
	printf("Introduzca el dia: ");
	scanf("%d", &dia);
	switch (dia){
		case 1: //dia == 1
			printf("Lunes");
			break;
		case 2: //dia == 2 
			printf("Martes");
			break;
		case 3: //dia == 3 
			printf("Miercoles");
			break;	
		case 4: //dia == 4 
			printf("Jueves");
			break;	
		case 5: //dia == 5 
			printf("Viernes");
			break;
		case 6: //dia == 6
			printf("Sabado");
			break;
		case 7: //dia == 7
			printf("Domingo");
			break;
		default: //dia != 1,2,3,4,5,6,7
			printf("Dia invalido");
			break;	
	}
	return 0;
}