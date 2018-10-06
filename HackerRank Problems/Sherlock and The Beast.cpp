#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,d,e,f,n5,n3,tc;
    while(cin>>tc)
    {
        for(l=1;l<=tc;l++)
        {
            bool found = false;
            cin>>n;
            a = n/3;
            b = a*3;
            for(i=b;i>=n/2;i-=3)
            {
                n5 = i;
                n3 = n-i;
                if(n5%3==0 && n3%5==0)
                {
                    found = true;
                    break;
                }
            }
            if(!found)
            {

                a = n/5;
                b = a*5;
                for(i=b;i>=n/2;i-=5)
                {
                    n3 = i;
                    n5 = n-i;
                    if(n5%3==0 && n3%5==0)
                    {
                        found = true;
                        break;
                    }
                }
            }
            if(found)
            {
                //printf("Five : %d, Three %d\n",n5,n3);
                for(i=1;i<=n5;i++)
                    cout<<5;
                for(i=1;i<=n3;i++)
                    cout<<3;
                cout<<endl;
            }
            else cout<<-1<<endl;

        }
    }




}
