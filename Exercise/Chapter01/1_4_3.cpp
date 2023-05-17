#include <iostream>
int main()
{
    /* 1.16
    std::cout << "Enter two numbers:" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2; // read input // use smaller number as lower bound for summation // and larger number as upper bound 
    int lower, upper;
    if (v1 <= v2)
    { 
        lower = v1; upper = v2;
    }
    else
    {
        lower = v2; upper = v1;
    } 
    std::cout << "Upper bound of " << v1 << " and " << v2 << " is " << upper << std::endl;
    */

    /* 1.17
    int sum = 0, v;
    while (std::cin >> v)           // end condition is "ctrl+z"
    {
        if (v < 0)
        {
            sum += 1;
        }
    }
    std::cout << "the number of negative is " << sum << std::endl;
    */
    return 0;
}