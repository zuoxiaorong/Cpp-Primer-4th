#include <iostream>
#include <vector>
#include <cstddef>
using namespace std;

// // 4.6 method 1
// const size_t array_size = 10; 
// int ia[array_size]; 
// int main()
// {    
//     for (size_t ix = 0; ix <= array_size - 1; ++ix) 
//         cout << ia[ix] << " ";
//     cout << endl;
//     for (size_t ix = 1; ix <= array_size - 1; ++ix) 
//         ia[ix] = ix;
//     for (size_t ix = 0; ix <= array_size - 1; ++ix) 
//         cout << ia[ix] <<  " ";
//     cout << endl;
//     return 0;
// }

// // 4.6 method 2
// int main()
// {    
//     const size_t array_size = 10; 
//     int ia[array_size]; 
//     for (size_t ix = 0; ix <= array_size - 1; ++ix) 
//         cout << ia[ix] << " ";
//     cout << endl;
//     for (size_t ix = 0; ix <= array_size - 1; ++ix) 
//         ia[ix] = ix;
//     for (size_t ix = 0; ix <= array_size - 1; ++ix) 
//         cout << ia[ix] <<  " ";
//     cout << endl;
//     return 0;
// }

// // 4.7
// int main()
// {
//     // using array
//     const size_t array_size = 7;
//     int ia1[] = { 0, 1, 2, 3, 4, 5, 6 };
//     int ia2[array_size];
//     for (size_t ix = 0; ix != array_size; ++ix) 
//         ia2[ix] = ia1[ix];
//     for (size_t ix = 0; ix <= array_size - 1; ++ix) 
//         cout << ia2[ix] <<  " ";
//     cout << endl;
//     return 0;
//     // using vector
//     vector<int> vec(7);
//     for (vector<int>::size_type ix = 0; ix != vec.size(); ++ix)
//         vec[ix] = ix;
//     vector<int> vec2;
//     for (vector<int>::size_type ix = 0; ix != vec.size(); ++ix)
//         vec2.push_back(vec[ix]);
//     for (vector<int>::size_type ix = 0; ix != vec.size(); ++ix) 
//         cout << vec2[ix] <<  " ";
//     cout << endl;
//     return 0;
// }

// // 4.8: input two arries/vectors and check if two arries/vectors is equal
// int main()
// {   
//     // compare two arraies
//     cout << "Enter 1st array (stop by ctrl+z)" << endl;
//     int i;
//     vector<int> vec1;
//     while (cin >> i)
//         vec1.push_back(i);
//     const size_t array_size = vec1.size();
//     int ia[array_size];
//     for (size_t ix = 0; ix != array_size; ++ix) 
//         ia[ix] = vec1[ix];
//     cin.clear();
//     cin.sync();
//     cout << "Enter 2nd array (stop by ctrl+z)" << endl;
//     int j;
//     vector<int> vec2;
//     while (cin >> j)
//         vec2.push_back(j);
//     const size_t array_size2 = vec2.size();
//     int ia2[array_size2];
//     for (size_t ix = 0; ix != array_size2; ++ix) 
//         ia2[ix] = vec2[ix];
//     if (array_size != array_size2)
//     {
//         cout << "The two arraies are different" << endl;
//         cout << "The 1st array is ";
//         for (size_t ix = 0; ix <= array_size - 1; ++ix) 
//             cout << ia[ix] <<  " ";
//         cout << endl;  
//         cout << "The 2nd array is "; 
//         for (size_t ix = 0; ix <= array_size2 - 1; ++ix) 
//             cout << ia2[ix] <<  " ";
//         cout << endl;  
//     }   
//     else    
//     {
//         bool flag = true;
//         size_t ix_g = 0; 
//         while (ix_g <= array_size)
//         {
//         if (ia[ix_g] != ia2[ix_g])
//             flag = false;
//         ++ix_g;
//         }
//         if (flag == false)
//         {
//             cout << "The two arraies are different" << endl;
//             cout << "The 1st array is ";
//             for (size_t ix = 0; ix <= array_size - 1; ++ix) 
//                 cout << ia[ix] <<  " ";
//             cout << endl;  
//             cout << "The 2nd array is "; 
//             for (size_t ix = 0; ix <= array_size2 - 1; ++ix) 
//                 cout << ia2[ix] <<  " ";
//             cout << endl; 
//         }
//         else
//         {
//             cout << "The two arraies are same" << endl;
//             cout << "The array is ";
//             for (size_t ix = 0; ix <= array_size - 1; ++ix) 
//                 cout << ia[ix] <<  " ";
//             cout << endl; 
//         }
//     }
//     return 0; 
//     // compare two vectors
//     cout << "Enter the first vector (stop by ctrl+z)" << endl;
//     int i;
//     vector<int> vec1;
//     while (cin >> i)
//         vec1.push_back(i);
//     cin.clear();
//     cin.sync();
//     cout << "Enter the second vector (stop by ctrl+z)" << endl;
//     int j;
//     vector<int> vec2;
//     while (cin >> j)
//         vec2.push_back(j);
//     if (vec1 == vec2)
//     {
//         cout << "The two vectors are same" << endl;
//         cout << "The vector is ";
//         for (vector<int>::size_type ix = 0; ix != vec1.size(); ++ix) 
//             cout << vec1[ix] <<  " ";
//         cout << endl;
//     }
//     else
//     {
//         cout << "The two vectors are different" << endl;
//         cout << "The 1st vector is ";
//         for (vector<int>::size_type ix = 0; ix != vec1.size(); ++ix) 
//             cout << vec1[ix] <<  " ";
//         cout << endl;
//         cout << "The 2nd vector is ";
//         for (vector<int>::size_type ix = 0; ix != vec2.size(); ++ix) 
//             cout << vec2[ix] <<  " ";
//         cout << endl;
//     }
//    return 0;
// }

// // 4.9: output a array in which the value is same with its position index
// int main()
// {    
//     const size_t array_size = 10; 
//     int ia[array_size]; 
//     for (size_t ix = 0; ix <= array_size - 1; ++ix) 
//         ia[ix] = ix;
//     for (size_t ix = 0; ix <= array_size - 1; ++ix) 
//         cout << ia[ix] <<  " ";
//     cout << endl;
//     return 0;
// }