#include <stdio.h>

int main() {
 
int Horas,Minutos, Segundos, T1,T2,T3, FINAL;
printf("Ingrese la cantidad de Horas, Segundos y Minutos"); scanf("%d %d %d",Horas,Minutos,Segundos );

T1 = Horas * 3600;
T2 = Minutos * 60;
T3 = Segundos * 1;
FINAL = T1 + T2 + T3;

printf("La cantidad total de tiempo en segundos es: %d ", FINAL);

    return 0;
}