#include <iostream>

int main()
{
    std::cout << "/*";              // Y
    std::cout << "*/";              // Y
    // std::cout << /* "*/" */;        // N
    std::cout << /* "*/" */";       // Y
}