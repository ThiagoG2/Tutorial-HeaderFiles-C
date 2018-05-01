#include "Header.h"

int fatorial(int numero)
{
    if(numero > 1)
    {
        return numero * fatorial(numero - 1);
    }
    else
    {
        return 1;
    }
}
