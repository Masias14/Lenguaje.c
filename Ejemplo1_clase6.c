#include <stdio.h> 
#define CORTE 5
#define LAVADO 2
#define PLANCHADO 4
#define SECADO 4
int main(){
	int contCortes = 0,contLavados = 0,contPlanchados = 0,contSecados = 0,mayorEdad = -1,menorEdad = 1000,opcion,cantidadClientes,edadCliente = 100000;
	int contCortesTotal = 0,contLavadosTotal = 0,contPlanchadosTotal = 0,contSecadosTotal = 0,serviciosSeleccionado = 0;
	float acumMontoGanado = 0,acumMontoPagar = 0,acumMayorGanancias = 0;
	char nombreMayorEdad[256],nombreMenorEdad[256],nombreMayorGanancias[256],nombrePeluquero[256],nombreCliente[256];
	
	do {
		printf("Seleccione una opcion a realizar: \n");
		printf("[1] Procesar Peluquero\n");
		printf("[2] Ver reporte\n");
		printf("[3] Salir\n");
		scanf("%d",&opcion);
		switch (opcion){
			case 1:
				printf("Introduzca el nombre del peluquero:\n");
				scanf("%s",&nombrePeluquero);
				printf("Introduzca la cantidad de clientes:\n");
				scanf("%d",&cantidadClientes);
				for (int i = 0; i < cantidadClientes; i++){
					printf("Introduzca el nombre del cliente %d:\n", i+1);
					scanf("%s",&nombreCliente);
					printf("Introduzca la edad de %s:\n",nombreCliente);
					scanf("%d",&edadCliente);
					if(edadCliente < menorEdad){
						menorEdad = edadCliente;
						nombreMenorEdad = nombreCliente;
					}
					if(edadCliente > mayorEdad){
						mayorEdad = edadCliente;
						nombreMayorEdad = nombreCliente;
					}
					do {
						printf("Que servicio solicito?:\n");
						printf("[1] Corte\n");
						printf("[2] Lavado\n");
						printf("[3] Planchado\n");
						printf("[4] Secado\n");
						printf("[5] Salir\n");
						scanf("%d",&serviciosSeleccionado);
						switch (serviciosSeleccionado){
							case 1:
								acumMontoPagar += CORTE;
								contCortes++;
								break;
							case 2:
								acumMontoPagar += LAVADO;
								contLavados++;
								break;
							case 3:
								acumMontoPagar += PLANCHADO;
								contPlanchados++;
								break;
							case 4:
								acumMontoPagar += SECADO;
								contSecados++;
								break;
							case 5:
								break;
							default:
								printf("Opcion invalida");
								break;
						}
					} while (serviciosSeleccionado != 5); //Ciclo de servicios;
					printf("Monto a pagar es de %s: $%.lf\n",nombreCliente,acumMontoPagar);
					acumMontoGanado += acumMontoPagar;
					acumMontoPagar = 0;
					contCortesTotal += contCortes;
					contLavadosTotal += contLavados;
					contPlanchadosTotal += contPlanchados;
					contSecadosTotal += contSecados;	
				} //Ciclo de clientes
				printf("Reporte de %s\n", nombrePeluquero);
				printf("\nTotal de Cortes: %d",contCortes);
				printf("\nTotal de Lavados: %d",contLavados);
				printf("\nTotal de Planchados: %d",contPlanchados);
				printf("\nTotal de Secados: %d",contSecados);
				printf("\n\nMonto total ganado es de: $%.lf",acumMontoGanado);
				printf("\n\nEl cliente mas viejo fue %s con %d años\n",nombreMayorEdad,mayorEdad);
				if (acumMontoGanado > acumMayorGanancias){
						mayorGanancias = acumMontoGanado;
						nombreMayorGanancias = nombrePeluquero;
				}
				contCortes = 0,contLavados = 0,contPlanchados = 0,contSecados = 0;
				acumMontoPagar = 0;
				mayorEdad = -1; 
				acumMontoGanado = 0;
				break;
			
			case 2:
				printf("\nREPORTE MYSTIQUE:\n");
				printf("\nPeluquero de mas ganancias hoy: %s con $%f",nombreMayorGanancias,mayorGanancias);
				printf("\nCliente mas joven hoy: %s con %d años",nombreMenorEdad,menorEdad);
				printf("\n\nCANTIDADES TOTALES DEL DIA:");
				printf("\nTotal de Cortes: %d",contCortesTotal);
				printf("\nTotal de Lavados: %d",contLavadosTotal);
				printf("\nTotal de Planchados: %d",contPlanchadosTotal);
				printf("\nTotal de Secados: %d\n\n",contSecadosTotal);
				break; 
			case 3:
				printf("Hasta pronto");
				break;	
			default:
				printf("Opcion Invalida");
				break;
		}
	} while (opcion != 3);
	return 0;
}