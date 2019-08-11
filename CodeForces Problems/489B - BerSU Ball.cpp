#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,boys[105],girls[105],sum,dif;
    while(cin>>a)
    {
        sum=0;
        for(i=0; i<a; i++)
            cin>>boys[i];
        cin>>b;
        for(i=0; i<b; i++)
            cin>>girls[i];
        n = min(a,b);
        sort(boys,boys+a);
        sort(girls,girls+b);
        /*for(i=0;i<a;i++)
            cout<<boys[i]<<" ";
        cout<<endl;
        for(i=0;i<b;i++)
            cout<<girls[i]<<" ";
        cout<<endl;*/
        if(n==a)
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<b; j++)
                {
                    if(girls[j]!=-1)
                    {
                        dif=abs(boys[i]-girls[j]);
                        if(dif<=1)
                        {
                            sum++;
                            girls[j]=-1;
                            break;
                        }
                        //else if(dif>1)
                          //  break;
                    }
                }
            }
        }
        else if(n==b)
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<a; j++)
                {
                    if(boys[j]!=-1)
                    {
                        dif=abs(girls[i]-boys[j]);
                        if(dif<=1)
                        {
                            sum++;
                            boys[j]=-1;
                            break;
                        }
                        //else if(dif>1)
                            //break;
                    }
                }
            }
        }
        cout<<sum<<endl;
    }


    return 0;
}
