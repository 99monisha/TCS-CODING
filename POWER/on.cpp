/*
Power of a number

1.5 ^ 2.5 = 2.75568
1.5 ^ -2.5 = 0.362887
*/


#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
    double base = 1.5;
    double expo1 = 2.5;
    double expo2 = -2.5;
    double res1, res2;
    res1 = pow(base, expo1);
    res2 = pow(base, expo2);
    
    cout << base << " ^ " << expo1 << " = " << res1 << endl;
    cout << base << " ^ " << expo2 << " = " << res2 << endl;
    
    return 0;
}