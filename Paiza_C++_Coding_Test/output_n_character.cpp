/*
半角アルファベットで構成された文字列 S と正の整数 N 入力されます。

1文字目から N 文字目までを出力して下さい。

例えば
abcdefg
4
と入力された場合

abcd
と出力して下さい。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    string str;
    int n{};
    cin >> str;
    cin >> n;
    cout << str.substr(0, n);


    return 0;
}