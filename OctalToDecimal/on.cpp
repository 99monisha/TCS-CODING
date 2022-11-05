/*
Octal to Decimal Conversion
306
*/


#include<iostream>
#include<math.h>
using namespace std;
int getOctal(long long num)
{
    int i = 0, decimal = 0;
    int base = 8;
    while (num!=0)
    {
        int digit = num % 10;
        decimal += digit * pow(base, i);

        num /= 10;
        i++;
    }
    return decimal;
}
int main()
{
    long long octal = 462;
    cout << getOctal(octal);   
    return 0;
}