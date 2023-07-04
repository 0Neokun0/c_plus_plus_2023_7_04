/*

*/
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    vector<double> temperatures {1, 2, 3, 4, 5};

    double average_temp {};
    double total {};

    for (auto temp: temperatures)
    total =+ temp;

        average_temp = total / temperatures.size();

    cout << fixed << setprecision(1);
    cout << "Average temperature is: " << average_temp << endl;

    return 0;
}