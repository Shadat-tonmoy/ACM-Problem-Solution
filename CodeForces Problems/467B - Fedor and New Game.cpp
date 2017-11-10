#include<bits/stdc++.h>
using namespace std;
bool _friend (int n,int m)
{
    int k,sum=0;
    while(n!=0)
    {
        k = n%2;
        if(k==1)
        {
          sum++;
          if(sum>m)
            return false;
        }
        n=n/2;
    }
    if(sum<=m)
        return true;
}
int main()
{
    int i,j,k,l,m,n,a,b,c,num[10000],ans=0;
    while(cin>>n>>m>>k)
    {
        ans=0;
        for(l=1;l<=m+1;l++)
        {
            cin>>num[l];
        }
        a = num[m+1];
        //cout<<"A : "<<a<<endl;
        for(i=1;i<=m;i++)
        {
            b = num[i];
            c = a^b;
            if(_friend(c,k))
                ans++;
        }
        /*c = a^b;
        if(_friend(c,1))
            printf("%d and %d is friend\n",a,b);
        else printf("%d and %d is not friend\n",a,b);
        //cout<<c<<endl;*/
        cout<<ans<<endl;
    }




    return 0;
}
