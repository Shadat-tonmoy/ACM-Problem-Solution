#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,k1,k2;
    bool first,second;
    while(scanf("%d %d %d %d",&a,&b,&k1,&k2)==4)
    {
        if((a%2==0 && b%2==0) || (a%2==1 && b%2==1))
        {
            if(a==b)
            {
                second=true;
                first=false;
            }
            else
            {
                if(a>b)
                {
                    first=true;
                    second=false;
                }
                else
                {
                    second=true;
                    first=false;
                }
            }
        }
        else
        {
            if(a>b)
            {
                first=true;
                second=false;
            }
            else
            {
                second=true;
                first=false;
            }
        }
        if(first)
            cout<<"First"<<endl;
        else cout<<"Second"<<endl;

    }


    return 0;
}
