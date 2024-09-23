#include <stdio.h>
int main()
{
     char nombre[20] ,apellido[20];

    printf("ingresa tu nombre: ");
    scanf("%s",&nombre);

    printf("ingresa tu apellido: ");
    scanf("%s",&apellido);

    printf("tu nombre completo es: %s %s",&nombre,&apellido);

    return 0;

}

