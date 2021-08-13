// Kattis-Cpp-Solutions
// Coded by Daniyal arteshdar
#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    int a, b ;
    cin >> a >> b ;
    if (a > b)
    {
        cout << b << " " << a ;
    }
    else
    {
        cout << a << " " << b ;
    }
    return 0 ;
}
