/*En una Casa de Cabio necesitan construir un programa que dado como
dato una cantidad expresada en dolares, convierta esa cantidad en pesos.
Construir el programa correspondiente. Tomar en cuenta que: 1dolar ↢ 11.96pesos*/

#include <stdio.h>
#include <math.h>
#define cambioUSD 11.96

int main() 
{
  float dolares, pesos;
  printf("Ingresa la cantidad en dólares: ");
  scanf("%f", &dolares);
  
  pesos = dolares * cambioUSD;
  
  printf("$%.2f dólares equivalen a $%.2f pesos.\n", dolares, pesos);
  
  return 0;
}
