#include <stdio.h>

int main(){
    int contPescados = 0,opcion;
    float acumPescados = 0,pesoPromedio = 0,pesoMayor = -1,pesoMenor = 1000,pesoLeido = 0;
    
    do {
    	printf("Seleccione una opcion a realizar: \n");
		printf("[1] Procesar Pescados\n");
		printf("[2] Imprimir reporte\n");
		printf("[3] Limpiar Datos\n");
		printf("[4] Salir\n");
		scanf("%d",&opcion);
    	switch (opcion){
    			case 1:
    					do {
					        printf("Datos del pescado %d\n",contPescados + 1);
					        printf("Introduzca su peso [0 para salir] (Kg):\n");
					        scanf("%g",&pesoLeido);
					        if (pesoLeido > 0){
					            contPescados++; //contPescados = contPescados +1
					            acumPescados += pesoLeido; //acumPescados = acumPescados + pesoLeido
					            if (pesoLeido > pesoMayor){
					                pesoMayor = pesoLeido;
					            }
					            if(pesoLeido < pesoMenor){
					                pesoMenor = pesoLeido;
					            }
					        }
					    } while (pesoLeido > 0);
					    pesoPromedio = acumPescados / contPescados;	
					    break;
				case 2: 
						printf("Reporte");
						printf("Se han pescado %d peces\n",contPescados);
						printf("Se han pescado un total de %g Kg\n",acumPescados);
						printf("Los pescados pesan %g Kg en promedio\n",pesoPromedio);
						printf("El pez mas grande peso %g Kg\n",pesoMayor);
						printf("El pez mas pequeño peso %g Kg",pesoMenor);
						break;
				case 3:
						break;
				case 4:
						printf("¡Hasta Pronto!");
						break; 
				default: 
						printf("Opcion Invalida");
						break; 
		}
	} while (opcion != 4);
    return 0;
}