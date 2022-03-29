#include <stdio.h>
int main(){
    int array[5] = {1};
    for (int i = 0; i < array; i++){
        printf("%c\n", array[i*3]);
    }
    scanf("%c \n");
    return 0;