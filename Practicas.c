#include <stdio.h> 

int main() {

    int clave = 2010, a,Menu;
    int d = 100, retiro, deposito;
    int ingreso = 0;

for(int i = 0; i < 3; i++) {
    printf("ingrese su clave\n");
    scanf("%d", &a);

    if(a == clave) {
        ingreso = 1;
        break;
    } else {
        printf("incorrecto.\n Intente de nuevo\n");
    }
}

if(ingreso == 0) {
    printf("limite de intentos alcansado");
}
    while(ingreso == 1) {
        printf("\n---Bienbenido--- \n1. Ver saldo \n2.retiro \n3.Depositar dinero \n4.salir\n");
        scanf("%d",&Menu);

        switch(Menu) {
            case 1:
            printf("saldo disponible $%d \n", d);
            break;

            case 2:
            printf("ingrese la cantidad que desea retirar \n");
            scanf("%d", &retiro);
            if(retiro > 0 && retiro <= d) {
                d -= retiro;
                printf("Le quedan $%d en su cuenta \n", d);
            } else {
                printf("saldo insuficiente");
            }
            break;
            case 3:
            printf("\n Ingrese el dinero\n");
            scanf("%d", &deposito);
            if (deposito > 0) {
            d += deposito;
            printf("El total en su cuenta es $%d\n", d);
         } else {
            printf("Error");
         }
         break;
            case 4:
            printf("Gracias por usar nuestro servicio");
            ingreso = 0;
            break;

            default:
            printf("opcion no valida. \n");
            break;
        }
    }

    return 0;
}