/*

*/
#include <iostream>
using namespace std;

int main()
{
    int num{};

    cout << "Enter a positive integer to count up to: ";
    cin >> num;

    int i{1}; // i starts from 1
    while (num >= i) // till num is greater or equal to i
    {
        cout << i << endl;
        i++;
    }

    return 0;
}