// variables that stores address of another variable
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *y = &x;
    cout << &x << endl;
    return 0;
}
