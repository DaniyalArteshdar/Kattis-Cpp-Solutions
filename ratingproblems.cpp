// Kattis-Cpp-Solutions
// Coded by Daniyal arteshdar
#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    // a is total number of judges
    // b is the ones they have already voted
    int a = 0, b = 0, totalScores = 0;
    float minScore = 0, maxScore = 0;
    cin >> a >> b;
    int c = a - b ;
    int array[255];
    for (int i = 0; i < b; i++)
    {
        int temporaryNumber = 0;
        cin >> temporaryNumber;
        array[i] = temporaryNumber;
        totalScores += temporaryNumber;
    }

    // here we have the total number of judges and
    // we have the number of the ones they have voted
    // and we have the scores

    // all of our judges have voted
    if (a == b)
    {
        minScore = (float)totalScores / (float)a;
        cout << minScore << " " << minScore << endl;
    }
    // all of our judges haven't voted
    else
    {
        maxScore = ((float)totalScores + (3*(float)c)) / (float)a ;
        minScore = ((float)totalScores - (3*(float)c)) / (float)a ;
        cout << minScore << " " << maxScore << endl;
    }

    return EXIT_SUCCESS;
}
