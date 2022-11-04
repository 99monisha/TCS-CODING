#include <iostream>
#include <math.h>
using namespace std;
 
void checkperfectsquare(int n)
{
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        cout << "True";
    }
    else {
        cout << "False";
    }
}

int main()
{
    int n = 49;
    checkperfectsquare(n);
    return 0;
}