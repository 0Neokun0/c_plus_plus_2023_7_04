/*
あなたはワインを作るためにぶどうがどれくらい必要なのか気になり計算することにしました。

ぶどうはボトルワイン 1 本あたり 1.5 kg のぶどうを使用するとした時、ボトルワイン n 本を作るときに必要なぶどうの量を計算し出力してください。

入力例 1 の場合
5
と入力されるので
7.5
と出力してください。
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Start from below
    int input;
    cin >> input;

    double product = input * 1.5;
    cout << fixed << setprecision(1);
    cout << product;

    return 0;
}