#include <stdio.h>

int main(){
	int cantidadNumeros = 0;
	float valor = 0,suma = 0;
	printf("Introduzca la cantidad de numeros a leer: ");
	scanf("%d",&cantidadNumeros);	
	for(int i = 0;i < cantidadNumeros;i++){
		printf("Introduzca el valor %d: ",i+1);
		scanf("%g",&valor);
		suma += valor; //suma = suma + valor;
	}
	printf("La sumatoria total es de %g",suma);
	return 0;
}