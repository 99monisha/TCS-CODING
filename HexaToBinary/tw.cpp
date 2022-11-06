// Hexadecimal to decimal conversion using inbuilt methods in C++
#include<iostream>
using namespace std;
int main()
{
    string hexNumber;
    cin >> hexNumber;
    int base = 16;
    cout << stoi(hexNumber, 0, base);
    return 0;
}