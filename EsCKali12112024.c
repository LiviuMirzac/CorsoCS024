#include <stdio.h>

int main(){
    int n1;
    int n2;
    int risultato;
    int media;

    printf("\nInserisci il primo numero: ");
    scanf("%d", &n1);

    printf("\nInserisci il secondo numero: ");
    scanf("%d", &n2);

    risultato = n1 * n2;
    printf("\nIl risultato della moltiplicazione è: %d\n", risultato);

    media = (n1 + n2)/2;
    printf("\nLa media dei due numeri è: %d\n", media);

    return 0;
}