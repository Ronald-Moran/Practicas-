#include <stdio.h>

int main () {

   double trimestre1,trimestre2,trimestre3,PARCIALES,examen_final,Trabajo_final, calificasion_final;

   printf("\n Ingrese Las calificasiones sus tres trimestres \n"); 
   scanf("%lf %lf %lf",&trimestre1,&trimestre2,&trimestre3 );
   printf("\n Ingese la calificasion de su Examen final \n"); scanf("%lf", &examen_final);
   printf("Ingrese su la calificasion de su proyecto\n"); scanf("%lf", &Trabajo_final);

   PARCIALES = (trimestre1 + trimestre2 + trimestre3) / 3 * 0.55;
   examen_final *= 0.30;
   Trabajo_final *= 0.15;
   calificasion_final = PARCIALES + examen_final + Trabajo_final;
   printf("Su calificasion final es %.2lf", calificasion_final);
   
 
    return 0;
}