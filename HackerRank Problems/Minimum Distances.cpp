#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,d,e,f,num[10005],mini;
    while(cin>>n)
    {
        mini = 9999999;
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(num[i]==num[j])
                {
                    mini = min(mini,j-i);
                    break;
                }
            }
        }
        if(mini==9999999)
            cout<<-1<<endl;
        else cout<<mini<<endl;


    }

    return 0;
}
