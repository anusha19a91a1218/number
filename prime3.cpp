#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"enter a num";
	cin>>n;
	for(int i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			cout<<"not a prime";
			count=1;
			break;
		}
	}
	if(count!=0)
	cout<<"prime num";
	return 0;
}
