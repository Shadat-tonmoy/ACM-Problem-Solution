#include <bits/stdc++.h>
using namespace std;
int h,m;
string input;
void getHMFromInput()
{
    h = 0;
    m = 0;
    bool startForM = false;
    for(int i=0;i<input.size();i++)
    {
        if(input[i]==':')
        {
            startForM = true;
            continue;
        }
        if(startForM)
        {
            m*=10;
            m+=(input[i]-'0');
        }
        else
        {
            h*=10;
            h+=(input[i]-'0');
            
        }
        
        
    }
}

int main() {
	int i,j,k,l,n,a,b,c,d,tc;
	while(cin>>tc)
	{
	    for(int x=0;x<tc;x++)
	    {
	        cin>>input;
	        getHMFromInput();
	        int ansM = 60 - m;
	        int ansH = 23 - h;
	        
	        if(m==0)
	        {
	            ansM = 0;
	            ansH++;
	        }
	       if(ansH>12)
	            ansH-=12;
	            
	            
	        if(ansH<10)
	            cout<<"0";
	        cout<<ansH<<":";
	        
	        if(ansM<10)
	            cout<<"0";
	        cout<<ansM<<endl;
	           
	       // cout<<"hour "<<h<<" minute "<<m<<endl;
	    }
	}
	
	return 0;
}

