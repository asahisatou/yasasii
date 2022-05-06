#include <iostream>
using namespace std;

template <class T>
T squaret(T x)
{
    T ans = x * x;
    return ans;
}

int main()
{
    int a;
    double da;

    cout << "整数を入力してください。\n";
    cin >> a;

    cout << "少数を入力してください。\n";
    cin >> da;

    int ans1 = squaret(a);
    double ans2 = squaret(da);

    cout << "整数の二乗は" << ans1 << "です。\n";
    cout << "少数の二乗は" << ans2 << "です。\n";

    return 0;
}