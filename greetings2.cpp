// Kattis-Cpp-Solutions
// Coded by Daniyal Arteshdar

#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main()
{
    string input ;
    string result = "h" ;
    int text_length ;
    int e_length ;

    cin >> input ;
    text_length = input.size();
    e_length = (text_length - 2) *2 ;
    for (int i = 0 ; i < e_length ; i ++)
    {
        result += "e" ;
    }
    result +="y" ;
    cout << result ;

    return 0;
}
