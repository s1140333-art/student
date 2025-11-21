#include <iostream>
using namespace std;
int main()
{
    std::cout << "請輸入你的年齡: " << endl;
    int age;
    cin >> age;
    if (age >= 18) {
        cout << "18歲成年" << endl;
    }
    if (age < 18) {
        cout << "未成年 請你好好讀書" << endl;
    }
    
    return 0;
}