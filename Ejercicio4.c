/*Una persona invierte en un banco una determinada cantidad de dinero y
a una cierta tasa de interes mensual. Construya un algortimo que
permita obtener el monto de dinero que obtendra al finalizar el mes.*/

#include <stdio.h>
#include <math.h>
int main() 
{
    float monto_inver, tasa_interes, monto_total;

    
    printf("Ingrese el monto invertido: ");
    scanf("%f", &monto_inver);
    printf("Ingresa la tasa de interés mensual (en porcentaje): ");
    scanf("%f", &tasa_interes);

    monto_total = monto_inver * (1 + tasa_interes / 100);

    printf("El monto total al final del mes será: $%.2f\n", monto_total);

    return 0;
}
