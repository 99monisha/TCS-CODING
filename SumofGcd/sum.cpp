/*
The sum of gcd is: 25
*/

#include<bits/stdc++.h>
using namespace std;
int sumGcd(int n,int a[])
{
int gcdsum=0;
int temgcd=0;
for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++)
    {
        temgcd=0;
        for(int k=i;k<=j;k++)
        {
            temgcd=__gcd(temgcd,a[k]);
        }
        gcdsum+=temgcd;
    }
}
return gcdsum;
}
int main()
{
    int n=5;
    int a[]={1, 2, 3, 4, 5};
    cout<<"The sum of gcd is: "<<sumGcd(n,a);
    return 0;
}