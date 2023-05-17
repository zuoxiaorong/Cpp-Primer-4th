#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter the base and the exponent" << endl;
    int b, e;
    cin >> b >> e;
    // method 1
    int p = 1;
    int result = 1;
    while (p <= e)
    {
        result *= b;
        ++p;
    }
    cout << "The result is " << result << endl;
    // method 2
    cout << "The result is " << pow(b,e) << endl;
    // method 3
    int result1 = 1;
    for (int val = 1; val <= e; ++val)
        result1 *= b;
    cout << "The result is " << result1 << endl;    
    return 0;
}