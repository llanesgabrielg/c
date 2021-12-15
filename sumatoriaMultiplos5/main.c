/*
Dada una serie de 10 números, calcule para cada uno, la sumatoria de los
múltiplos de 5
que hay entre 1 y el número leído. Ej: si el número es 25, debe sumar
5+10+15+20+25.
Realice una función para determinar la suma
*/

#include <stdio.h>
int sumatoria(int numero);

int main()
{
    int valor;
    int multiplo = 5;
    int cantidad = 10;
    int numero, resultado;
    printf("ingresar 10 numeros");
    for (int i = 0; i < cantidad; i++)
    {
        printf("ingresar numero");
        scanf("%d", &numero);
        resultado = sumatoria(numero);
        printf("el multiplo de %d es : %d", numero, resultado);
    }

    return 0;
}

int sumatoria(int numero)
{
    int sumatoria = 0;
    int multiplo = 5;
    int valor;
    for (int i = 1; i <= numero; i++)
    {
        valor = i * multiplo;
        if (valor <= numero)
        {
            sumatoria = sumatoria + valor;
        }
    }
    return sumatoria;
}