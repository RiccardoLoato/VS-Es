#include <stdio.h>
#include <string.h>
int main()
{
char nome[]="Luca";
printf("La lunghezza della stringa è: %ld\n\n",strlen(nome));
char nome2[strlen(nome)];
strcpy(nome2, nome);
printf("La stringa Nome2 contiene%s\n\n", nome2);
char Saluto[]="Saluto";
strcat("La stringa Saluto contiene %s\n\n",Saluto);
if(strcmp(nome,nome2)==0)
printf("Le stringhe sono uguali\n\n");
else
printf("le stringhe non sono uguali\n\n");
printf("La stringa nome contiene %s\n",nome);
printf("La stringa nome scritta al contrario è: %d\n\n",strrev(nome));
printf("La stringa nome2 contiene: %s\n",nome2);
printf("La stringa nome2 Scritta in minuscolo è: %s\n\n", strlwr(nome2));
printf("La stringa nome2 contiene: %s\n",nome2);
printf("La stringa scritta in maiuscolo è: %d\n\n",strupr(nome2));
return 0;
}