#include <stdio.h>

int main() {

    int horas;
    const float TASA_ies = 0.0945;
    double ganancia, ganancia_hora, sueldo_mensual, aporte_ies, sueldo_neto, tiket;

    printf("\nIngrese su numero de horas laborales\n"); scanf("%d", &horas);
    printf("\n si tiene algun aumento escriba el codigo de su tiket\n"); scanf("%lf", &tiket);
    ganancia_hora = 3.00;
    if (tiket == 23456) {
        ganancia_hora += ganancia_hora / 4;
        printf("25 porciento de aumento");
    } else {
        printf("Codigo no valido");
    }

    ganancia = horas * ganancia_hora;
    aporte_ies = ganancia * TASA_ies;
    sueldo_neto = ganancia - aporte_ies;
    printf("\n--- Detalle de Pago ---\n");

    switch(horas) {
        case 8:
        printf("Su sueldo diario es: $%.2lf \n", ganancia);
        break;

        case 160:
        printf("Su sueldo mensual es : $%.2lf\n", ganancia);
        break;

        case 1920:
        printf("su sueldo anual es: $%.2lf\n", ganancia);
        break;

        default:
        printf("su sueldo es: $%.2lf\n", ganancia);        
        break;

    }
        printf("Descuento IESS: $%.2lf\n", aporte_ies);
        printf("Ganancia Real:  $%.2lf\n", sueldo_neto);
        
    return 0;
}