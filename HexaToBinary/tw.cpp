/*
Hexadecimal to decimal conversion using inbuilt methods in C++
3B7
951
 */ 




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