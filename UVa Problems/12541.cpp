#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,n,a,b,c,d,y,m,mini,maxi,ck;
    string name[10000];
    while(cin>>n)
    {
        mini = 999999999999999;
        maxi = 0;
        for(i=0;i<n;i++)
        {
            cin>>name[i]>>d>>m>>y;
            ck = d+(m*30)+(y*365);
            if(ck>maxi)
            {
                maxi=ck;
                a = i;
            }

            if(ck<mini)
            {
                mini=ck;
                b = i;
            }

        }
        //cout<<maxi<<endl<<mini<<endl;
        cout<<name[a]<<endl<<name[b]<<endl;
    }


    return 0;
}
