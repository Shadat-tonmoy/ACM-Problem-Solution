#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,c,sum=0,one,two,three,num[10000],bal[3],team;
    while(cin>>n)
    {
        bool o,t,th;
        o=false;
        t=false;
        th=false;
        one=0;
        two=0;
        three=0;
        int mini = 999999999;
        for(i=1;i<=n;i++)
        {
            cin>>m;
            num[i]=m;
            if(m==1)
                one++;
            else if (m==2)
                two++;
            else
                three++;
        }
        bal[0]=one;bal[1]=two;bal[2]=three;
        sort(bal,bal+3);
        team = bal[0];
        cout<<team<<endl;
        for(i=1;i<=team;i++)
        {
            o=false;
            t=false;
            th=false;
            c=0;
            for(j=1;j<=n;j++)
            {
                if(num[j]==1 && !o)
                {
                    cout<<j<<" ";
                    o=true;
                    num[j]=-1;
                }
                else if(num[j]==2 && !t)
                {
                    cout<<j<<" ";
                    t=true;
                    num[j]=-1;
                }
                else if(num[j]==3 && !th)
                {
                    cout<<j<<" ";
                    num[j]=-1;
                    th=true;
                }
                if(o && t && th)
                    break;
            }
            cout<<endl;
        }
    }





    return 0;

}


