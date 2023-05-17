#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter the base and the exponent" << std::endl;
    int b, e;
    std::cin >> b >> e;
    // method 1
    int p = 1;
    int result = 1;
    while (p <= e)
    {
        result *= b;
        ++p;
    }
    std::cout << "The result is " << result << std::endl;
    // method 2
    std::cout << "The result is " << pow(b,e) << std::endl;
    // method 3
    int result1 = 1;
    for (int val = 1; val <= e; ++val)
        result1 *= b;
    std::cout << "The result is " << result1 << std::endl;    
    return 0;
}