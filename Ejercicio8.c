/*Construir un diagrama de flujo que pueda determinar, dados dos n ́umeros
enteros, si un n ́umero es divisor del otro.*/

#include <stdio.h>

int main() 
{
  int num1, num2;

      
  printf("Ingrese el primer número: ");
  scanf("%d", &num1);
  printf("Ingrese el segundo número: ");
  scanf("%d", &num2);

if (num1 % num2 == 0) 
{
  printf("%d es divisor de %d\n", num2, num1);
} 
else if (num2 % num1 == 0) 
{
  printf("%d es divisor de %d\n", num1, num2);
} 
else 
{
  printf("Ninguno de los números es divisor del otro.\n");
}

  return 0;
}
