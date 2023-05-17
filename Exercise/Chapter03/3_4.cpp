#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    // // 3.18
    // vector<int> v;
    // for (int n = 0; n<5; ++n)
    //     v.push_back(n);
    // vector<int>::iterator i;
    // for (i = v.begin(); i != v.end(); ++i)
    // {
    //     cout << *i << " "; 
    //     *i *= 2;
    // }
    // cout << endl;
    // 3.19
    for (vector<int>::iterator j = v.begin(); j != v.end(); ++j)
        cout << *j << " ";
    for (vector<int>::reverse_iterator j = v.rbegin(); j != v.rend(); ++j)
        cout << *j << " ";
    return 0;
}