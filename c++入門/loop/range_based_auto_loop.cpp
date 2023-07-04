/*
Range-based for Loop
- auto
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int scores[] {10, 20, 30};
    
    for (auto score: scores)
     cout << score << endl;
     cout << endl;

    return 0;
}