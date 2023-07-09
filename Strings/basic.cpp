#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s0;
    string s1("Hello");
    string s2 = "Hello world";
    string s3(s2);  // hello world
    string s4 = s3; // hello world

    char a[] = {'a', 'b', 'c', 'd', '\0'};
    string s5(a);
    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    if (s0.empty())
    {
        cout << "s0 is the empty string" << endl;
    }
    s0.append("I am appending");
    cout << s0 << endl;
    s0 += " yay again ";
    cout << s0 << endl;
    cout << s0.length() << endl;
    s0 = "Apple";
    s1 = "Mango";
    cout << s1.compare(s0) << endl;

    // find substring
    string s = "I want juice";
    int idx = s.find("juice");
    cout << idx << endl;

    string word = "juice";
    int len = word.length();
    s.erase(idx, len);
    cout << s << endl;

    // iterate
    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << ":";
    }
    cout << endl;

    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        cout << (*it) << endl;
    }
    // for each
    for (auto c : s1)
    {
        cout << c << ".";
    }
    // string word = "apple";
    // int len = word.length();
    // cout << s << endl;
    // s.erase(idx, len++);
    // cout << s << endl;
    // // iterate
    // for (int i = 0; i < s1.length(); i++)
    // {
    //     cout << s[i] << ": ";
    // }
}
