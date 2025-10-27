#include <stdio.h> 
#include "multiplicar_function.c"
void main() 
{ 
    int numero1,numero2,produto; 

    printf("Número 1: "); 
    scanf("%d",&numero1); 
    printf("Número 2: "); 
    scanf("%d",&numero2); 

    produto = multiplicar(numero1,numero2);
    printf("\nO produto é igual a %d\n",produto);     
}
