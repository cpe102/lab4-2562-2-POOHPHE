#include<bits/stdc++.h>

using namespace std;

//Write function findDistance() here
double findDistance(double u,double a,double t)
{
	return u*t+a*t*t/2;
}
int main()
{
	double u,a,t;
	cin>>u>>a>>t;
  //Calling findDistance() using test cases
	cout<<findDistance(u,a,t);
  return 0;
}
