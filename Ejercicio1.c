//TAREA 1
//Escriba un programa tal que dado como datos dos numeros y calcular la suma, resta y multiplicacion de dichos numeros

#include <stdio.h>

int main() 
{   
  int num1, num2;
  int suma, resta, multiplicacion;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    printf("La suma de %d y %d es: %d\n", num1, num2, suma);
    printf("La resta de %d y %d es: %d\n", num1, num2, resta);
    printf("La multiplicación de %d y %d es: %d\n", num1, num2, multiplicacion);

    return 0;
}
