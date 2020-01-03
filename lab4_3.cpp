#include<bits/stdc++.h>

using namespace std;

int  findDivisor(int x){
	int y=2;
	while(x%y!=0){
		y++;
	}
	return y;
}

int main(){
	int x;
	cin>>x;
	cout<<findDivisor(x);
}
