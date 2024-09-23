#include <stdio.h>

int main() {
    int anoactual,anonacimiento,edad;

    printf("ingresa el año actual: "),
    scanf("%d",&anoactual);

    printf("ingresa tu año de nacimiento");
    scanf("%d",&anonacimiento);

    edad = anoactual - anonacimiento;

    printf("tu edad es:  %d años");


}
