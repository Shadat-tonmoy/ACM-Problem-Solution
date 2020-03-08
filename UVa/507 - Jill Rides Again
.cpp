#include<bits/stdc++.h>
using namespace std;
#define SIZE 100000
int num[SIZE],n,ans,ansLeft,ansRight,maxSum,maxLen;
void solve()
{
    maxSum = 0;
    maxLen = 0;
    int memo[SIZE],sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum+=num[i];
        memo[i] = sum;
        if(sum>=maxSum)
        {
            maxSum = max(maxSum,sum);
            ansLeft = 0;
            ansRight = i;
            maxLen = i;
        }
        
    }
    
    for(int i=1;i<n-1;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            int left = i, right = j;
            int x = memo[right] - memo[left-1];
            if(x>=maxSum)
            {
                // cout<<"sum is now "<<x<<" left "<<left<<" right "<<right<<endl;
                if(x==maxSum)
                {
                    int len = right - left;
                    if(len>=maxLen)
                    {
                        if(len==maxLen)
                        {
                            if(left<ansLeft)
                            {
                                ansLeft = left;
                                ansRight = right;
                            }
                            
                        }
                        else
                        {
                            ansLeft = left; 
                            ansRight = right;
                        }
                        maxLen = len;
                    }
                }
                else
                {
                    int len = right - left;
                    maxLen = len; 
                    ansLeft = left;
                    ansRight = right;
                }
                maxSum = x;
            }
        }
    }
}
int main()
{
    int i,j,k,l,m,tc,x,y,z;
    while(cin>>tc)
    {
        for(x=1;x<=tc;x++)
        {
            cin>>n;
            for(k=0;k<n-1;k++)
            {
                cin>>num[k];
            }
            // cout<<"for tc "<<x<<endl<<endl<<endl;
            solve();
            if(maxSum>0)
            {
                printf("The nicest part of route %d is between stops %d and %d\n",x,ansLeft+1,ansRight+2);
                // cout<<"MAX IS "<<maxSum<<endl;
            }
            else printf("Route %d has no nice parts\n",x);
        }
        
    }
}

