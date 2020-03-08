//url
#include <bits/stdc++.h>
using namespace std;
int getNumber(char str[]);
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	char str[10000],number[1000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
            cin>>str;
            int len = strlen(str);
            int maxNum = 0;
            for(i=0;i<len;)
            {
                if(str[i]>='0' && str[i]<='9')
                {
                    l=i;
                    k=0;
                    while(str[l]>='0' && str[l]<='9')
                    {
                        // cout<<"ok for "<<l<<" ";
                        number[k++]=str[l++];
                    }
                    number[k]='\0';

                    maxNum = max(maxNum,getNumber(number));
                    // cout<<"after "<<number<<" l "<<l<<" k "<<k<<endl;
                    i=(l+k-1);
                }
                else i++;
            }
            cout<<maxNum<<endl;
	    }
	}
	return 0;
}
int getNumber(char str[]){
    int len = strlen(str);
    int sum=0;
    for(int i=0;i<len;i++)
    {
        sum*=10;
        sum+=(str[i]-'0');
    }
    return sum;
}
