#include <stdio.h>
#include <string.h>

int main() {

    char Nombre[31],preferencias[41];
    puts("Ingrese su nombre y genero favorito de anime");
    fgets(Nombre,30,stdin);
    fgets(preferencias,30,stdin);
    preferencias[strcspn(preferencias, "\n")] = 0;

    if (strcmp(preferencias,"Romanse") == 0) {
    puts("Uff hermano eres un conosedor");
    }
    else if (strcmp(preferencias,"Shonen") == 0) {
        puts("umm Bueno no esta mal");
    } else {
        puts("Ala solprendente");
    }
 


    return 0;
}
