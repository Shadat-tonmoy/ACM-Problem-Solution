//https://practice.geeksforgeeks.org/problems/jumping-numbers/0
#include <bits/stdc++.h>
using namespace std;
int findDig(int n);
void f(int i,int j);
bool isValidNum(long long int num);
int dig,num[10000],n;
set<long long int> output;
set<long long int> :: iterator it;
long buildNumber(int k);
bool done;
int main() {
	int i,j,k,l,m,a,b,c,tc,x,y,z;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			done = false;
			dig = findDig(n);
			for(i=1;i<=9;i++)
			{
				if(!done)
				{
					num[0]=i;
					f(0,num[0]);
				}
			}
			for(it=output.begin();it!=output.end();it++)
				cout<<*it<<" ";
			cout<<endl;
			output.clear();

	        
	    }
	}
	return 0;
}
void f(int i,int j)
{
	// cout<<"f ("<<i<<" "<<j<<")"<<endl;
	if(i>dig || j<0)
		return;
	num[i] = j;
	if(i<=dig)
	{
		long ans = buildNumber(i);
		if(ans<=n && isValidNum(ans))
			output.insert(ans);
		// cout<<"For i "<<i<<" "<<ans<<endl;
	}
	f(i+1,j-1);
	f(i+1,j+1);
}
int findDig(int n)
{
	if(n==0)
		return 1;
	int dig = 0;
	while(n!=0)
	{
		n=n/10;
		dig++;
	}
	return dig;
}
long buildNumber(int k)
{
	long ans=0;
	for(int i=0;i<k;i++)
	{
		ans*=10;
		ans+=num[i];
	}
	return ans;
}
bool isValidNum(long long int num){
	if(num>n)
		return false;
	
	int digits[50],i,j;
	i=0;
	while(num!=0)
	{
		digits[i++]=num%10;
		num/=10;
	}
	bool ok = true;
	for(j=i-1;j>=1;j--)
	{
		if(abs(digits[j]-digits[j-1])==1)
			ok = true;
		else{
			ok = false;
			break;
		}
	}
	if(ok)
		return true;
	else return false;
}