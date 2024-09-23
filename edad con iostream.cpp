#include <iostream>

int main()
{
    int ano_nacimiento,ano_actual, edad;

    std::cout<<"ingresa tu año de nacimiento: ";
    std::cin>>ano_nacimiento;

    std::cout<<"ingresa el año actual: ";
    std::cin>>ano_actual;

    edad = ano_actual - ano_nacimiento;

    std::cout<<"tu edad es: "<<edad<<std::endl;

    return 0;
}
