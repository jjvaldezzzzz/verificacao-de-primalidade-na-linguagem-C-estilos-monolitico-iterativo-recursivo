#include <stdio.h>

int main() {
    int n, i = 2;
    printf("Entrada: "); scanf("%d", &n);

    if (n < 2) goto NAO_PRIMO;

TESTE:
    if (i * i > n) goto PRIMO; // condição de parada
    if (n % i == 0) goto NAO_PRIMO;
    i++;
    goto TESTE;

PRIMO:
    printf("1\n");
    return 0;

NAO_PRIMO:
    printf("0\n");
    return 0;
}