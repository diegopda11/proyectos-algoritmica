#include <stdio.h>

int main() {
    int anoactual,anonacimiento,edad;

    printf("ingresa el a�o actual: "),
    scanf("%d",&anoactual);

    printf("ingresa tu a�o de nacimiento");
    scanf("%d",&anonacimiento);

    edad = anoactual - anonacimiento;

    printf("tu edad es:  %d a�os");


}
