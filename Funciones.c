#include <stdio.h>
#include <string.h>

double calculardescuento (double monto, double VIP) {
    return (monto >= 100 || VIP == 1236) ? 0.20 : 0.0;

}

int main() {

    double PAG,VIP,DESCUENTO, Precio;
    PAG = 0;
    char juego[50];
    puts("Minecraft cuesta $50  \n Silson $3.00 \n Roblox $100 \n Ingrese su el nombre del juego que desea comprar");
    fgets(juego,sizeof(juego),stdin);
    juego[strcspn(juego, "\n")] = 0;
    puts("si es usuario VIP dijite su clave. Si no lo es esciba 0");
    scanf("%lf", &VIP);

    if (strstr(juego,"Minecraft") != NULL) {
    PAG += 50;
    }
    if (strstr(juego,"Silson") != NULL) {
    PAG += 3.00;
    }
    if (strstr(juego,"Roblox") != NULL) {
    PAG += 100;
    }

   DESCUENTO = calculardescuento(PAG,VIP);
   Precio = PAG - (PAG * DESCUENTO);
   
   if (DESCUENTO == 0.20) {
    printf("¡A resivido un descuento del 20 porciento! El total de su compra es de: %.2lf", Precio);
   } else {
    printf("El total de su compra es de: %.2lf", Precio);
   }

   
    return 0;
}