#include <stdio.h>

int main(void) {
    int n, nmax=0;
    for (int i = 1; i <= 10; i++) {
        printf("inserisci i 10 numeri: ");
        scanf("%d", &n);
        if (n > nmax) {
            nmax = n;
        }
    }
    printf("nmax = %d\n", nmax);
}
