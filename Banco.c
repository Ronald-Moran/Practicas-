#include <stdio.h>
#include <math.h>

int Comprovar( int n1) {
 return n1 % 2;
}

int main () {
 int Numero, variable;
 double rais;
 puts("Inserte un numero");
 scanf("%d", &Numero);
 variable = Comprovar(Numero);
 

 if (Numero >= 0) {
    rais = sqrt(Numero);
    printf("la raiz cuadrada de %d es %.2lf \n",Numero, rais);
 } else {
    puts("tiene raiz imaginaria ");
 }

 if (variable == 0 ){
    puts("el numero es par");
 } else {
    puts("el numero es impar");
 } 


    return 0;
}
