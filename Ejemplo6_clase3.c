#include <stdio.h>

int main(){
	int rangoSalario=0;
	float salarioTrabajador=0,nuevoSalario=0;
	printf("Introduzca el rango del salario:\n");
	printf("[1] $0-$90\n");
	printf("[2] $91-$180\n");
	printf("[3] $181-$300\n");
	printf("[4] $301-$600\n");
	printf("[5] $601-$1000\n");
	printf("[6] $1001-$2000\n");
	printf("[7] +$2001\n");
	scanf("%d",&rangoSalario);
	if(rangoSalario < 1 || rangoSalario > 7){
	    printf("Verifique el rango del salario");
	    return 0;
	}
	printf("Introduzca su salario: ");
	scanf("%g",&salarioTrabajador);
	switch(rangoSalario){
	    case 1: case 7:
	        nuevoSalario=salarioTrabajador*1.3;
	        break;
	    case 2: case 6:
	        nuevoSalario=salarioTrabajador*1.25;
	        break;
	    case 3: case 5:
	        nuevoSalario=salarioTrabajador*1.15;
	        break;
	    case 4:
	        nuevoSalario=salarioTrabajador*1.1;
	        break;
	}
	printf("Nuevo salario de trabajador: $%g",nuevoSalario);
	return 0;
}