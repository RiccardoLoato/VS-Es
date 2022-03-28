#include<stdio.h>
main()
{
    int i=0;
    printf("Immettere un voto: ");
    scanf("%d", i);

    (i<6) ? printf("\nVoto Negativo"):printf("\nVoto Positivo");
}