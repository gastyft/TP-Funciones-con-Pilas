#include <stdio.h>
#include <stdlib.h>
#include "../Librerias/pila.h"
#include <conio.h>
#define ESC 27


///8. Hacer una función que sume y retorne los dos primeros elementos de una pila (tope y anterior), sin alterar su contenido.


void cargar_pila(Pila *aCargar);
int suma_y_retorno(Pila d);
int main()
{
    system("COLOR B");
Pila dada;
inicpila(&dada);
cargar_pila(&dada);
printf(" La suma es %d \n ",suma_y_retorno(dada));

    return 0;
}


void cargar_pila(Pila *aCargar){

int num;
char o=0;
while(o!=27){
printf("Ingrese numero\n \t");
scanf("%d",&num);
apilar(aCargar,num);
printf("Presione ESCAPE para salir o cualquier tecla para continuar \n");
fflush(stdin);
o=getch();

}

}

int suma_y_retorno(Pila d){

Pila aux;
int suma=0;
inicpila(&aux);


int i=0;
while(!pilavacia(&d) && i<2){


suma+=tope(&d);
printf("<<<<<<< %d >>>>>>> \n",tope(&d));
apilar(&aux,desapilar(&d));
i++;

}

return suma;
}
