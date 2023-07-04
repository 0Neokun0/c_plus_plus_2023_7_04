/*
あなたは電池が必要な機器のために電池を買うことにしました。

その機器に必要な本数 n と購入した電池の本数 m が与えられるので毎回 n 本すべてを取り替える場合に何回交換可能かと余る本数を改行区切りで出力して下さい。

入力例 1 の場合
3
10
と入力されるので
3
1
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int dividend{}, divisor{};
    cin >> dividend;
    cin >> divisor;

    int remainder = divisor % dividend;
    cout << dividend << endl;
    cout << remainder;

    return 0;
}