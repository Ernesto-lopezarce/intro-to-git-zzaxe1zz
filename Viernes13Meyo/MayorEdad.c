
#include <stdio.h>

int main(){

    int edad;
    printf("Indique si edad: ");
    scanf("%d", &edad);
    if(edad>=18)
        printf("Eres Mayor de edad");

    else
        printf("Te falta vivir bb");

    return 0;
}