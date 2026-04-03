#include <stdio.h>

int main() {

    int i,n, suma=0;
    i = 0;
    puts("Dijite un numero"); scanf("%d", &n);
    if (n > 10) {
        suma=1;
        while (i <= n) {
            suma *= i;
            i++;
        }
    } else {
        while (i <= n) {
            suma += i;
            i++;
        }
    }

    return 0;
}
