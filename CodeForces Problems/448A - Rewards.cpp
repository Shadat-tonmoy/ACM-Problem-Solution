#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,a1,a2,a3,b1,b2,b3,t_c,t_m,sum=0;
    while(cin>>a1>>a2>>a3)
    {
        sum=0;
        cin>>b1>>b2>>b3;
        cin>>n;
        t_c = a1+a2+a3;
        t_m = b1+b2+b3;
        sum+= t_c/5;
        if(t_c%5>0)
            sum+=1;
        sum+= t_m/10;
        if(t_m%10>0)
            sum+=1;
        //cout<<sum<<endl;
        if(sum<=n)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }




    return 0;

}


