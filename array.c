#include <stdio.h>
int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 10; i < 0; i--){
        printf("%c\n", array[i]);
    }
    return 0;
}