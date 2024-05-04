#include <stdio.h>

void ejercicio_1();
void ejercicio_2();

int main(void) // 
{
    ejercicio_2();
    return 0;
}

void ejercicio_1()
{
    int n1, n2, producto, suma, resto;
    float cociente;

    printf("Ingrese número 1\n"); // \n caracter de escape (lo pone en la linea de abajo)
    scanf("%d", &n1);
    printf("Ingrese número 2\n");
    scanf("%d", &n2);
    suma = n1 + n2;
    producto = n1 * n2;
    resto = n1 % n2;
    cociente = (float)n1 / n2;
    printf("La suma es: %d\n", suma);
    printf("El producto es: %d\n", producto);
    printf("El resto es: %d\n", resto);
    printf("El cociente es: %f\n", cociente);
}
void ejercicio_2(){

}
