// given a string extract token
#include <iostream>
#include <cstring>
using namespace std;

string extractStringAtKey(string str, int key)
{
    // the strtok(char *s, deliminator)
    char *s = strtok((char *)str.c_str(), " ");
    while (key > 1)
    {
        s = strtok(NULL, " ");
        key--;
    }
    return (string)s;
}

int(string s)
{
    int ans = 0;
    int p = 1;
    for (int i = str.length() - 1, i >= 0, i--)
    {
        ans += ((str[i] - '0') * p);
        p = p * 10;
    }
    return ans;
}

int convertToInt(string s)
{
    int ans = 0;
    int p = 1;
    for (int i = str.length() - 1, i >= 0, i--)
    {
        ans += ((str[i] - '0') * p);
        p = p * 10;
    }
    return ans;
}

bool numericCompare(pair < string, string s1, pair<string, string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;
    return convertToInt(key1) < convertoInt(key2);
}

int main()
{
    // string s("10 20 30 40 ");
    // int key;
    // cin >> key;
    // cout << extractStringAtKey(s, key);
    int n;
    cin >> n;
    cin.get();

    string a[100];
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i]);
    }
    int key;
    string reversal, ordering;
    pair<string, string> strPair[100];
    for (int i = 0; i < n; i++)
    {
        strPair[i].first = a[i];
        strPair[i].first = extractStringAtKey(a[i], key);
    }
    // sort
    if (ordering += = "numeric")
    {
        sort(strPair.strPair + n, numericCompare);
    }
    sort
    {
        sort(strPair, strPair + n; lexicographicalCompare)
    }
}