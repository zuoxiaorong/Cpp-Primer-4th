#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    // // 3.13 
    // cout << "Enter some numbers" << endl;
    // int i;
    // vector<int> v;
    // while  (cin >> i)
    //     v.push_back(i);
    // // the solution to the front question
    // if (v.size() % 2 == 0)
    // {
    //     for (vector<int>::size_type ix = 0; ix <= v.size() - 2; ix += 2)
    //         cout << "The sum of " << ix + 1 << "th and " << ix + 2 << "th is " << v[ix] + v[ix+1] << endl;
    // }
    // else
    // {
    //     for (vector<int>::size_type ix = 0; ix <= v.size() - 3; ix += 2)
    //         cout << "The sum of " << ix + 1 << "th and " << ix + 2 << "th is " << v[ix] + v[ix+1] << endl;
    //     cout << "And the " << v.size() << "th element is " << v.back() << endl;     
    // }
    // // the solution to the back question
    // if (v.size() % 2 == 0)
    // {
    //     for (vector<int>::size_type ix = 0; ix <= v.size()/2 - 1; ++ix)
    //         cout << "The sum of " << ix + 1 << "th and " << v.size() - ix << "th is " << v[ix] + v[v.size() - ix - 1] << endl;
    // }
    // else
    // {
    //     for (vector<int>::size_type ix = 0; ix < (v.size() - 1)/2; ++ix)
    //         cout << "The sum of " << ix + 1 << "th and " << v.size() - ix << "th is " << v[ix] + v[v.size() - ix - 1] << endl;
    //     cout << "And the " << (v.size() + 1)/2 << "th element is " << v[(v.size() - 1)/2] << endl;     
    // }
    // return 0;

    // // 3.14 
    // cout << "Enter text(Ctrl+Z to end)" << endl;
    // string i;
    // vector<string> v;
    // while  (cin >> i)
    //     v.push_back(i);
    // for (vector<string>::size_type ix = 0; ix != v.size(); ++ix)
    // {
    //     for (string::size_type index = 0; index != v[ix].size(); ++index)
    //     {
    //         if (islower(v[ix][index]))
    //             v[ix][index] = toupper(v[ix][index]);
    //         cout << v[ix] << " ";
    //         if ((ix + 1) % 8 == 0)
    //             cout << endl;
    //     }
    // }
    // return 0;

    // // 3.15
    // vector<int> ivec;
    // ivec.push_back(42);
    // for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix)
    //     cout << ivec[ix] << endl;
    // return 0;

    // // 3.16
    // vector<int> vec(10, 42);                // method 1
    // vector<int> vec(10);                    // method 2
    // for (vector<int>::size_type ix = 0; ix != vec.size(); ++ix)
    //     vec[ix] = 42;
    // vector<int> vec;                        // method 3
    // for (vector<int>::size_type ix = 0; ix < 10; ++ix)
    //     vec.push_back(42);
    // for (vector<int>::size_type ix = 0; ix != vec.size(); ++ix)
    //     cout << vec[ix] << " ";
    // return 0;
}