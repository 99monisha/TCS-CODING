/*
Write a program to print fibonacci series in C++



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