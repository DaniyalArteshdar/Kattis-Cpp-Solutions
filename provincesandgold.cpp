// Kattis-Cpp-Solutions
// Coded by Daniyal Arteshdar

#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main()
{
    int g, s, c ;
    int total ;
    string result1, result2;
    cin >> g >> s >> c ;
    result1 = "";
    result2 = "" ;
    total = (g*3) + (s*2) + (c) ;

    if (total > 7)
    {
        result1 = "Province or";
    }
    else if (total > 4)
    {
        result1 = "Duchy or" ;
    }
    else if (total >1)
    {
        result1 = "Estate or" ;
    }

    if (total > 5)
    {
        result2 = " Gold" ;
    }
    else if (total > 2)
    {
        result2 = " Silver";
    }
    else
    {
        result2 = " Copper" ;
    }

    cout << result1 << result2 ;

    return 0;
}
