#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,t;
    double x,sum,total,ans;
    while(cin>>n>>t)
    {
        if(t==0)
            ans=0;
        else if(n==1)
            ans=1;
        else if (n==2)
        {
            x=1;
            if(t==1)
                ans=1;
            else if(t==2)
                ans=1;
            else if (t>=3)
                ans=3;
        }
        else if(n==3)
        {
            if(t>8)
                ans = 6;
            else
            {
                x=(double)6/8;
                ans = (double)x*t;
            }
        }
        else if (n==4)
        {
            if(t>14)
                ans = 10;
            else
            {
                x=(double)10/14;
                ans = (double)x*t;
            }
        }
        else if (n==5)
        {
            if(t>21)
                ans = 15;
            else
            {
                x=(double)15/21;
                ans = (double)x*t;
            }
        }
        else if(n==6)
        {
            if(t>29)
                ans = 21;
            else
            {
                x=(double)21/29;
                ans = (double)x*t;
            }
        }
        else if(n==7)
        {
            if(t>38)
                ans = 28;
            else
            {
                x=(double)28/38;
                ans = (double)x*t;
            }
        }
        else if(n==8)
        {
            if(t>48)
                ans = 36;
            else
            {
                x=(double)36/48;
                ans = (double)x*t;
            }
        }
        else if(n==9)
        {
            if(t>59)
                ans = 45;
            else
            {
                x=(double)45/59;
                ans = (double)x*t;
            }
        }
        else if(n==10)
        {
            if(t>71)
                ans = 55;
            else
            {
                x=(double)55/71;
                ans = (double)x*t;
            }
        }
        cout<<ceil(ans)<<endl;

    }





    return 0;
}

