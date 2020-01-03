#include<bits/stdc++.h>
using namespace std;
double Result(int x)
{
    double y=3*pow(x,3)+2*2.71828+pow(2,2*x+1)+sqrt(x*x+1);
    return y;
}


int main()
{
    int x;
    cout<<"Enter x = ";
    scanf("%d",&x);
    cout<<"Result y = "<<Result(x);
}

