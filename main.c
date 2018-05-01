#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main()
{
    int numero;
    int valorFatorial;

    printf("Informe o número para calcularmos o fatorial: ");
    scanf("%d", &numero);

    if(numero < 0)
    {
        printf("Não existe fatorial de números negativos!");
        return 0;
    }

    valorFatorial = fatorial(numero);
    printf("%d!= %d\n", numero, fatorial(numero));

    return 0;
}
