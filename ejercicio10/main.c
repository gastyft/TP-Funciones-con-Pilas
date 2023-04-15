#include <stdio.h>
#include <stdlib.h>
#include "../Librerias/pila.h"
#include <conio.h>
#define ESC 27



/**
10. Hacer una función que reciba una pila con números de un solo dígito
 (es responsabilidad de quien usa el programa) y que transforme esos dígitos en un número decimal.
  Por ejemplo, la pila:

TOPE
1
4                Debe retornar el número: 14675
6
7
5
BASE
*/


void cargar_pila(Pila *a);
int numero_decimal(Pila a);
int main()
{
    system("COLOR B");
    Pila dada;
    inicpila(&dada);
    cargar_pila(&dada);
    printf("%d \n",numero_decimal(dada));
    return 0;
}

void cargar_pila(Pila *a)
{
    char o=0;
    while(o!=27)
    {

        leer(a);
        printf("Si desea continuar presione cualquier tecla sino ESCAPE para finalizar \n");
        fflush(stdin);
        o= getch();

    }
    system("cls");
    mostrar(a);
}

int numero_decimal(Pila a)
{
    int num=0;

    ///primer numero
    num=tope(&a);
    desapilar(&a);
    ///segundo numero
    num+=(10*tope(&a));
    desapilar(&a);
    ///tercer numero
    num=num+(100*tope(&a));
    desapilar(&a);
    ///cuarto numero

    num=num+(1000*tope(&a));
    desapilar(&a);
    ///ultimo numero

    num=num+(10000*tope(&a));

    return num;
}




