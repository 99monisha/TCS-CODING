/*
Write a program to print fibonacci series in C++
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377,
*/
#include <iostream>
using namespace std;

int main()
{
    int num = 15;
    int a = 0, b = 1;
    cout << a << ", " << b << ", ";
    int nextTerm;
    for(int i = 2; i < num; i++){
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        
        cout << nextTerm << ", ";
    }

    return 0;
}