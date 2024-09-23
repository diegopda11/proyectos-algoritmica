#include <iostream>
int main()
{
    float celsius, fahrenheit;

    std::cout<<"grados celsius: ";
    std::cin>>celsius;

    fahrenheit = celsius * 9/5 + 32;

    std::cout<<celsius<<"grados celsius son "<< fahrenheit <<" grados fahrenheit"<<std::endl;

        return 0;
}
