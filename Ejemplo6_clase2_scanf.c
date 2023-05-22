#include <stdio.h>
#include <math.h>
int main(){
	float precioMedicamento,descuento,montoPagar;
	printf("Introduzca el precio del medicamento: ");
	scanf("%g",&precioMedicamento);
	descuento=precioMedicamento*0.35;
	montoPagar=precioMedicamento-descuento;
	printf("Precio del medicamento: %g$\n",precioMedicamento);
	printf("Descuento: %g$\n",descuento);
	printf("Monto a pagar: %g$\n",montoPagar);
	return 0;
}