/*



*/


#include <bits/stdc++.h>
using namespace std;
#define MAX 256
int main ()
{
     int a[]={10, 20, 10, 10, 20, 30, 30, 30, 30, 0};
     int n = sizeof(a)/sizeof(a[0]);
     int arr[MAX][2], brr[MAX][2];
     int k = 0, temp, count;
     
     for (int i = 0; i < n; i++){
          arr[i][0] = a[i];
          arr[i][1] = 0;
     }
     for (int i = 0; i < n; i++){
         if (arr[i][1])
            continue;
         count = 1;
         for (int j = i + 1; j < n; j++){
            if (arr[i][0] == arr[j][0]){
               arr[j][1] = 1;
               count++;
            }
         }
         brr[k][0] = arr[i][0];
         brr[k][1] = count;
         k++;
    }
    n = k;
    for (int i = 0; i < n - 1; i++)
    {
        temp = brr[i][1];
        for (int j = i + 1; j < n; j++)
        {
           if (temp < brr[j][1])
           {
                 temp = brr[j][1];
                 brr[j][1] = brr[i][1];
                 brr[i][1] = temp;

                 temp = brr[j][0];
                 brr[j][0] = brr[i][0];
                 brr[i][0] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        while (brr[i][1] != 0)
        {
           cout<< brr[i][0] <<" ";
           brr[i][1]--;
        }
    }
    return 0;
}