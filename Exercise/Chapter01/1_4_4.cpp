#include <iostream>
int main()
{
    /* 1.18
    std::cout << "Enter two numbers: " << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    int lower, upper;
    if (v1 <= v2)
    {
        lower = v1; upper = v2;
    }
    else
    {
        lower = v2; upper = v1;
    }
    for (int val = lower; val <= upper; ++val)
    {
        std::cout << val << " ";
    }
    return 0;
    */

    /* 1.20
    std::cout << "Enter two numbers: " << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2; 
    int sum = 0;
    while (v1 <= v2)
    {
        for (int val = v1; val <= v2; ++val)
        {
            sum += val;    
        }
        std::cout << sum << std::endl;
        return 0;    
    }
    while (v1 > v2)
    {
        for (int val = v2; val <= v1; ++val)
        {
            sum += val;    
        }
        std::cout << sum << std::endl;
        return 0;    
    }
    */
}