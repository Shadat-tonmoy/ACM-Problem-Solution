//url
#include <bits/stdc++.h>
using namespace std;
bool isPallindrome(char str[]);
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	char str[100000];
	//sfreopen("input.txt","r",stdin);
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
            if(x==1)
                getchar();
            i=0;
            char ch;
            while(scanf("%c",&ch)==1)
            {
                if(ch=='\n')
                    break;
                if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
                {
                    if(ch>='A' && ch<='Z')
                    {
                        ch+=32;
                        str[i++]=ch;
                    }
                    else str[i++]=ch;
                }
            }
            str[i]='\0';
            if(isPallindrome(str))
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
	    }
	}
	return 0;
}
bool isPallindrome(char str[])
{
    int len = strlen(str);
    int i,j;
    for(i=0,j=len-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
            return false;
    }
    return true;


}
