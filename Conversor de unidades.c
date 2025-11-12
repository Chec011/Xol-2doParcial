#include<stdio.h>
//Convierte centimetros a pulgadas//

int main()
{
    float Valor;
    float Resultado;

    printf("Ingresa el valor a convertir \n");
    scanf("%f", &Valor);
    Resultado=Valor/2.54;
    printf("El resultado es: %f \n", Resultado );
}

