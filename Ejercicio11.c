/*Hacer un programa que calcule la suma de los numeros pares 
comprendidos entre el 10 y 50.*/

#include <stdio.h>

int main() 
{
  int suma = 0;

  for (int i = 10; i <= 50; i++) 
  {
    if (i % 2 == 0) 
    {  
      suma += i;  
    }
  }
  printf("La suma de los números pares entre 10 y 50 es: %d\n", suma);

  return 0;
}
