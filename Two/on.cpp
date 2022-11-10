/*
Check whether a number is Armstrong number or not
Armstrong number in C++
407 is armstrong
*/

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int order(int x)
{
    int len = 0;
    while (x)
    {
        len++;
        x = x/10;
    }
    return len;
}
bool armstrong(int num, int len){
    int sum = 0, temp, digit;
    temp = num;
    while(temp != 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit,len);
        temp /= 10;
    };
 return num == sum;
}
int main ()
{
    int num = 407, len;
    len = order(num);
    if (armstrong(num, len))
        cout << num << " is armstrong";
    else
        cout << num << " is not armstrong";


    return 0;
}