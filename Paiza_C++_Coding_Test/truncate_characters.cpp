/*
あなたはある文字を表示するプログラムを作成しています。

しかし、文字を表示可能な文字数に限りがあることに気が付きました。
とりあえず表示をするために先頭 1 文字目から表示領域分の文字を取り出すことにしました。

表示可能な文字数 n と文字列 S が入力されるので、文字列 S のうち先頭から n 文字を出力して下さい。

入力例 1 の場合

5
paizacoding
paizacoding のうち先頭から 5 文字分となるので

paiza
と出力して下さい。
*/
#include <iostream>
using namespace std;

int main()
{
    int n{};
    string str;

    cin >> n;
    cin >> str;
    
    cout << str.substr(0, n);

    return 0;
}