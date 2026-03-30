#include <stdio.h> 
#include <string.h>

int main() {

    char palabra[200];
    int Cantidad = 0;
    char letra;
    puts("Ecriba una palabra o frase");
    fgets(palabra,sizeof(palabra),stdin);
    palabra[strcspn(palabra,"\n")]=0;
    puts("Escriba una letra que desee encontrar dentro de su frase");
    scanf(" %c",&letra);

        for(int i = 0; i < strlen(palabra);i++) {
    
            if (palabra[i] == letra) {
        Cantidad++;
       }
    }
     printf("En la frase '%s', la letra '%c' se repite: %d veces",palabra,letra, Cantidad);
    return 0;
}