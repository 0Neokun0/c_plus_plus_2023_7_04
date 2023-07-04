/*
あなたは新しい本棚を買おうと検討しています。そこで、既に持っている本の幅などから収まるか概算することにしました。

持っている本の幅を合計したもの n (cm)、検討している本棚の段数 d 、本が収まる幅 e (cm)がそれぞれ半角スペース区切りで与えられます。
概算なので本それぞれの違い1段に収まるかは考えないことにします。

例えば、本の幅を合計したものが 400(cm)、検討している本棚の段数が 5、本が収まる幅が 85 (cm)の場合、以下の様な入力になり
400 5 85
各段の幅を合計したものは 85 かける 5 で 425 (cm)となり、400 (cm)の本は収まるので以下のように出力して下さい。
OK
*/
#include <iostream>
using namespace std;

int main()
{
    int width_of_books_n{}, shelves_d{}, width_e{};
    cin >> width_of_books_n >> shelves_d >> width_e;

    int acceptable{400};
    int width_multiplied_with_shelfs = width_e * shelves_d;

    if (width_multiplied_with_shelfs >= acceptable)
    {
        cout << "OK";
    }
    else
        cout << "NG";
        
    return 0;
}