#include <iostream>
using namespace std;
int main()
{
    int score;
    int total = 0;
    cout << "テスト点数を入力してください。\n";

    while(score){
        cin >> score;
        total+=score;
    }
    cout << "テストの点数は" << total << "点です。\n";
    return 0;
}