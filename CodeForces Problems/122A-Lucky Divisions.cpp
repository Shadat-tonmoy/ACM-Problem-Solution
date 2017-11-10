#include<bits/stdc++.h>
using namespace std;
bool isLucky (int n)
{
    int i,j,rem;
    bool flag=false;
    while(n!=0)
    {
        rem = n%10;
        //cout<<rem<<endl;//<<n<<endl;
        if(rem==4 || rem==7)
            flag = true;
        else
        {
            flag = false;
            break;
        }
        n=n/10;
        //cout<<n<<endl;
    }
    if(flag)
        return true;
    else return false;
}
main()
{
    int i,j=0,k,l,m,n,lucky[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    while(cin>>n)
    {
        bool found = false;
        if(isLucky(n))
            printf("YES\n");
        else
        {
            for(i=0;i<14;i++)
            {
                if(n%lucky[i]==0)
                {
                    //cout<<i<<" : "<<lucky[i]<<endl;
                    found = true;
                    break;
                }
            }
            if(found)
                printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;

}
