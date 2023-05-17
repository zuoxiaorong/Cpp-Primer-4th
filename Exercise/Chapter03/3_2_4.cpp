#include <iostream>
using namespace std;

int main()
{
    // 3.7
    // cout << "Enter Sentence 1" << endl;
    // string str1;
    // getline(cin, str1);
    // cout << "Enter Sentence 2" << endl;
    // string str2;
    // getline(cin, str2);
    // if (str1 == str2)
    // {
    //     cout << "Sentence 1 is same with Sentence 2" << endl;
    // }
    // else if  (str1 > str2)
    // {
    //     cout << "Sentence 1 is bigger than Sentence 2" << endl;
    // }
    // else
    // {
    //     cout << "Sentence 1 is smaller than Sentence 2" << endl;
    // }

    // if (str1.size() == str2.size())
    //     cout << "Two sentences have the same length" << endl;
    // else if (str1.size() > str2.size())
    // {
    //     cout << "Sentence 1 is longger than Sentence 2" << endl;
    // }
    // else 
    // {
    //     cout << "Sentence 1 is shorter than Sentence 2" << endl;
    // }    
    // return 0;

    // 3.8
    // string str_in;
    // cout << "Enter strings" << endl;
    // string str;
    // while (cin >> str_in)
    //     // str += str_in;
    //     str += str_in + " ";
    // cout << str << endl;
    // return 0;

    // 3.9
    // string s;
    // cout << "Enter a string" << endl;
    // getline(cin, s);
    // cout << "The first character is " << s[0] << endl;

    // 3.10
    string s, res;
    bool flag(true);

    while (flag)
    {
        cout << "Enter a string with punctuation characters" << endl;
        getline(cin, s);
        res = "";
        for (string::size_type index = 0; index != s.size(); ++index)
        {
            if (ispunct(s[index])) 
                flag = false;
            else
                res += s[index];
        }
    }
    cout << "The entered string without punctuation characters is " << res << endl;
    return 0;
}