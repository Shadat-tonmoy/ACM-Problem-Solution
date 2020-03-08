#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,a,first,div,c,middle,num[100025],sum;
    while(cin>>n)
    {
        sum=0;
        c=0;
        bool possible = true;
        for(i=0; i<n; i++)
        {
            cin>>num[i];
        }
        for(i=0; i<n-1; i++)
        {
            sum+=(abs(num[i]-num[i+1]));
        }
        if(sum==0 || n==1 || n==2)
        {
            cout<<0<<endl;
            continue;
        }
        div=ceil((double)sum/(n-1));
        //cout<<div<<endl;
        for(i=0; i<n; i++)
        {
            if(num[i]%div!=0 && ((num[i]+1)%div==0 || (num[i]-1)%div==0))
            {
                c++;
            }
            else if(num[i]%div==0)
            {
                possible=true;
            }
            else
            {
                possible = false;
                break;
            }
        }
        if(!possible)
        {
            div=floor((double)sum/(n));
            //cout<<div<<endl;
            for(i=0; i<n; i++)
            {
                if(num[i]%div!=0 && ((num[i]+1)%div==0 || (num[i]-1)%div==0))
                {
                    c++;
                }
                else if(num[i]%div==0)
                {
                    possible=true;
                }
                else
                {
                    possible = false;
                    break;
                }
            }


        }
        if(!possible)
            cout<<-1<<endl;
        else cout<<c<<endl;

    }


    return 0;
}
