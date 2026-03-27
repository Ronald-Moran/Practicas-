#include <stdio.h>

#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main() {
    int numero;
    printf(" diguite un numero \n"); scanf("%d", &numero);
    if (numero > 0){
        puts("Es un numero positivo");
    } else {
        puts("numero negativo");
    }


    return 0;
}
