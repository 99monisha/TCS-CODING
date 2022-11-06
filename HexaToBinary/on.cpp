/*


*/


#include<iostream>
#include<math.h>
using namespace std;
int convert(string num)
{
    int len = num.size();
    int dec = 0, index = 0;
    for(int i = len - 1; i >= 0; i--)
    {
        if (num[i] >= '0' && num[i] <= '9') 
        {
            int digit = int(num[i]) - 48; 
            dec += digit * pow(16, index); 
            index++; 
        } 
        else if (num[i] >= 'A' && num[i] <= 'F') 
        { 
            int digit = int(num[i]) - 55; 
            dec += digit * pow(16, index); 
            index++; 
        } 
    } 
    return dec; 
} 
int main() 
{ 
    string num; 
    cin >> num;
    cout << (convert(num));
    return 0;
}