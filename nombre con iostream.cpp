#include <iostream>

int main()
{
    char nombre [20], apellido[20];

    std::cout<<"ingresa tu nombre: ";
    std::cin>>nombre;

    std::cout<<"ingresa tu apellido: ";
    std::cin>>apellido;

    std::cout<<"tu nombre completo es: "<<nombre<<" "<<apellido<<std::endl;


    return 0;
}
