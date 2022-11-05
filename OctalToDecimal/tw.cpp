/*
Octal to Decimal Conversion
462
306
*/


#include<iostream>
using namespace std;
 
int main()
{
    string binaryNumber;
    cin >> binaryNumber;
    int base = 8;
    cout << stoi(binaryNumber, 0, base);
    return 0;
}