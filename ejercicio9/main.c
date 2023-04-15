#include <stdio.h>
#include <stdlib.h>
#include "../Librerias/pila.h"
#include <conio.h>
#define ESC 27


/**9. Hacer una función que calcule el promedio de los elementos de una pila, para ello hacer también una función que calcule la suma,
otra para la cuenta y otra que divida.
 En total son cuatro funciones, y la función que calcula el promedio invoca a las otras 3. */


 void cargar_pila(Pila *d);
float promedio(Pila aPromediar);
int suma(Pila aSumar);
int cuenta_datos(Pila d);
float division(Pila d);

int main()
{
    system("COLOR B");
Pila dada;
inicpila(&dada);
cargar_pila(&dada);

printf("El promedio es: %.2f",promedio(dada));


    return 0;
}


void cargar_pila(Pila *d){

char o=0;


while(o!=27){
leer(d);
printf("Presione ESCAPE para salir o cualquier tecla para continuar \n");
fflush(stdin);
o=getch();
}

}

int suma(Pila aSumar){
int suma=0;
Pila aux;
inicpila(&aux);

while(!pilavacia(&aSumar)){
    suma+=tope(&aSumar);

    apilar(&aux,desapilar(&aSumar));


}
return suma;

}



float promedio(Pila aPromediar){


return division(aPromediar);

}

int cuenta_datos(Pila d){
Pila aux;
int i=0;
inicpila(&aux);

while(!pilavacia(&d)){
        apilar(&aux,desapilar(&d));
i++;

}
return i;
}
 float division(Pila d){




return  (float)suma(d) /cuenta_datos(d);
}





