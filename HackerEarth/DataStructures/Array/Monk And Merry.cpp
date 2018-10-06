#include<bits/stdc++.h>
#define MAX 100000
#define MAXI 0
#define MINI 9999999999
using namespace std;
int main()
{
    int i,j,k,l,m,n,mini,maxi,num[MAX],tc,ans;
    while(cin>>tc)
    {
        for(l=1;l<=tc;l++)
        {
            cin>>n;
            mini = MINI
            for(i=0;i<n;i++)
            {
                cin>>num[i];
                mini = min(mini,num[i]);
            }
            ans = 0;
            for(i=0;i<n;i++)
            {
                if(num[i]==mini)
                    ans++;
            }
            if(ans%2==0)
                cout<<"Unlucky"<<endl;
            else cout<<"Lucky"<<endl;


        }
    }


    return 0;
}
