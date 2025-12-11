#include <iostream>
using namespace std;

int main()
{
    int password = 7; 
    int enterkey;
    
    cout << "輸入密碼(1-10)";
    while (password != enterkey) {
        cout << "密碼錯誤，輸入密碼(1-10)";
        cin >> enterkey;
    }
    cout << "密碼正確遊戲結束" << endl;
    return 0;
}