#include <iostream>
#include <cmath>

double factorial (int h)
{
    if (h == 0)
    return 1;
    else return h * factorial (h-1);
}
int main() {
    std::cout << "Task one." << std::endl;
    for (int i=0;i<128;++i)
    {
        std::cout << "Number: " << i << "\t"<< "Code: "<< static_cast<char>(i) << std::endl;
    }
    std::cout << "The end of the task one." << std::endl;
    std::cout << "Task two." << std::endl;
    std::cout << "Enter the symbol: ";
    char f;
    std::cin >> f;
    if (static_cast<char>(f)>47 && static_cast<char>(f)<58)
    {
        std::cout << "This is a number." << std::endl;
    }
    if (((static_cast<char>(f)>64 && static_cast<char>(f)<91))||(static_cast<char>(f)>96 && static_cast<char>(f)<123))
    {
        std::cout << "This is a letter." << std::endl;
    }
    if (static_cast<char>(f)<48 || (static_cast<char>(f)>57 && static_cast<char>(f)<65) || (static_cast<char>(f)>90 && static_cast<char>(f)<97) || static_cast<char>(f)>122)
    {
        std::cout << "This if unknown symbol." << std::endl;
    }
    std::cout << "The end of the task two." << std::endl;
    std::cout << "Task three." << std::endl;
    unsigned int x;
    std::cout << "Enter the value of the variable x: ";
    std::cin >> x;
    unsigned int g = x % 4;
    switch (g)
    {
        case 0:
            std::cout << "The value of the function for a given value of x is " << std::pow(x,3) << std::endl;
            break;
        case 1:
            std::cout << "The value of the function for a given value of x is " << 1-std::pow(x,2) << std::endl;
            break;
        case 2:
            std::cout << "The value of the function for a given value of x is " << 2/x << std::endl;
            break;
        case 3:
            std::cout << "The value of the function for a given value of x is " << x+2 << std::endl;
            break;
    }
    std::cout << "The end of the task three." << std::endl;
    std::cout << "Task four." << std::endl;
    std::cout << "Enter the value of the variable x: ";
    int m;
    std::cin >> m;
    double t;
    float e = 2.71828;
    t = std::pow(e,m);
    double s = 1;
    int i = 1;
    float k = 0.01;
    do
    {
        do
        {
            s = s + (std::pow(m, i) / factorial(i));
            i += 1;
        }
        while ((t - s) > k);
        std::cout << "Required number of operations is " << i << " for precision " << k << std::endl;
        k = k / 10;
    }
    while (k>0.0000001);
    std::cout << "The end of the task four." << std::endl;
    return 0;
}
