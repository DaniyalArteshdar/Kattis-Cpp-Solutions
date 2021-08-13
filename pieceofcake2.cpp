# Kattis-Cpp-Solutions
// Coded by Daniyal Arteshdar
#include <iostream>
#include <unistd.h>
#include <math.h>

using namespace std;

int main()
{
   int a, b, c ;
   int th = 4 ;
   cin >> a >> b>> c ;
   int aa, bb ;
   aa = max(b, (a-b));
   bb = max(c, (a-c));
   cout << (th*aa*bb) ;
  return 0;
}
