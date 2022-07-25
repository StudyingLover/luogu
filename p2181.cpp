#include<stdio.h>
#include <iostream>
using namespace std;

int main()
{
    unsigned long long n;
    scanf("%d",&n);
    
    
    cout<<n*(n-1)/2*(n-2)/3*(n-3)/4;
    return 0;

}