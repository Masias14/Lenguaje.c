#include <stdio.h>

int main(){
	int zona = 0;
	float horasTrabajadas = 0, totalPagar = 0;
	printf("Introduce la zona en que trabajo:\n");
	printf("[1] Finanzas\n");
	printf("[2] Produccion\n");
	printf("[3] Administracion\n");
	printf("[4] Otra\n");
	scanf("%d", &zona);
	if (zona <= 0 || zona > 4){
		printf("Zona invalida");
		return 0;
	}
	printf("Introduzca las horas trabajadas: ");
	scanf("%g", &horasTrabajadas);
	if (zona == 1){
		totalPagar = 5 * horasTrabajadas;
	} else if (zona == 2){
		totalPagar = 6 * horasTrabajadas;
	} else if (zona == 3){
		totalPagar == 5.5 * horasTrabajadas;
	} else if (zona == 4){
		totalPagar = 4 * horasTrabajadas;
	} 
	printf("El total a pagar es $%g",totalPagar);
	return 0;
}