#include <stdio.h>

int main(){
	float nota = 0,acumNotas = 0,promedioNotas = 0;
	int contNotas = 0,centinela = 1;
	while(centinela == 1){
		printf("Introduzca la nota %d: ",contNotas + 1);
		scanf("%g",&nota);
		if(nota >= 1 && nota <= 30){
			acumNotas += nota; //acumNotas = acumNotas + nota;
			contNotas++; //contNotas = contNotas + 1;
		} else {
			printf("La nota es invalida.\n");
		}
		printf("Desea procesar otra nota?\n");
		printf("[1] Si [2] No\n");
		scanf("%d",&centinela);
	}
	promedioNotas = acumNotas / contNotas;
	printf("La nota promedio fue de %g puntos. ",promedioNotas);
	if(promedioNotas >= 15){
		printf("La seccion ha aprobado.");
	} else {
		printf("La seccion no ha aprobado.");
	}
	return 0;
}