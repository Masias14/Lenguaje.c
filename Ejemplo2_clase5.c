#include <stdio.h>
#define RON_MORON 12
#define WHISKY_PAJAROVIEJO 75
#define VODKA_ABSOLUTO 32
int main(){
    float montoTotal = 0,recaudacionTotal = 0,montoMayor = -1;
    int botellaVendida = 0,respCliente = 0,respBotella = 0;
    do{ //Clientes
        printf("Procesando cliente nuevo\n");
        do{ //Botellas
            printf("Seleccione la botella comprada:\n");
            printf("[1] Ron Moron\n");
            printf("[2] Whisky Pajaroviejo\n");
            printf("[1] Vodka Absoluto\n");
            scanf("%d",&botellaVendida);
            switch (botellaVendida){
                case 1:
                    montoTotal += RON_MORON;
                    break;
                case 2:
                    montoTotal += WHISKY_PAJAROVIEJO;
                    break;
                case 3:
                    montoTotal += VODKA_ABSOLUTO;
                    break;
                default:
                    printf("Opcion Invalida");
                    break;
            }
            printf("Desea procesar otra botella?\n[1] Si [2] No\n");
            scanf("%d",&respBotella);
        } while (respBotella != 2);
        printf("El monto total a pagar es de $%g\n",montoTotal);
        recaudacionTotal += montoTotal;
        if (montoTotal > montoMayor){
            montoMayor = montoTotal;
        }
        montoTotal = 0;
        printf("Desea procesar otra botella?\n[1] Si [2] No\n");
        scanf("%d",&respCliente);
    } while (respCliente != 2);
    printf("La recaudacion total del dia es de $%g\n",recaudacionTotal);
    printf("El mayor monto vendido fue $%g",montoMayor);
    return 0;
}