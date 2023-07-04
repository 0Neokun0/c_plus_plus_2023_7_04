#include <iostream>

using namespace std;

int main()
{
    bool done {false};
    int number {0};

    while(!done) // while done is true
    {
        cout << "Enter an integer between 1 and 10 : ";
        cin >> number;
        if (number <= 1 || number >= 10)
            cout << "Out of range, try again" << endl;
        else {
            cout << "Thanks!" << endl;
            done = true;
        }
    }
}