/*Dado como dato el sueldo de un trabajador considere un aumento del
15% si un sueldo es inferior a $1,000 y de un 12% en caso contrario.
Imprimir el sueldo con el aumento incorporado. Hacer el codigo en lenguaje C correspondiente.*/

#include <stdio.h>

int main() 
{
  float sueldo, sueldoConAumento;

  printf("Ingrese el sueldo del trabajador: ");
  scanf("%f", &sueldo);

  if (sueldo < 1000) 
  {
    sueldoConAumento = sueldo * 1.15; 
  } 
  else 
  {
    sueldoConAumento = sueldo * 1.12; 
  }
    printf("El sueldo con el aumento es: %.2f\n", sueldoConAumento);

    return 0;
}
