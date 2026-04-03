#include <stdio.h>

int main() {
 
    int edad;
    
    puts("Cuantos años tienes \n Si tienes mas 18 puedes pasar si Pero si tienes Invitacion espesial damela"); scanf("%d", &edad);


if (edad >= 18 || edad == 1345) {
    puts("Puede pasar");
} else {
    puts("No puede pasar");
}
    return 0;
}