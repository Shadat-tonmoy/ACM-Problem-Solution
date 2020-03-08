#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int i,j,k,l,m,n,a,b,x,y,z,sum=0,s,drg[100000],str[10000];

    while(cin>>s>>n)
    {
        bool yes=true;
        for(i=0; i<n; i++)
        {
            cin>>drg[i]>>str[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(drg[i]>drg[j])
                {
                    swap(drg[i],drg[j]);
                    swap(str[i],str[j]);
                }
            }
        }
        /*cout<<endl;
        for(i=0;i<n;i++)
            cout<<drg[i]<<" "<<str[i]<<endl;
        cout<<endl;*/
        for(i=0;i<n;i++)
        {
            if(s>drg[i])
            {
                yes=true;
                s+=str[i];
            }
            else
            {
                //cout<<"else "<<drg[i]<<" "<<s<<endl;
                yes=false;
                break;
            }
        }
        if(yes)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;

}


