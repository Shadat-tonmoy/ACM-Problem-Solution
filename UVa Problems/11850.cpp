#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,num[100000];
    bool possible=false;
    while(cin>>n)
    {
        possible = false;
        int flag = 0;
        if(n==0)
            break;
        for(i=0; i<n; i++)
            cin>>num[i];
        sort(num,num+i);
        for(i=0; i<n-1; i++)
        {
            if(num[i+1]-num[i]<=200)
                possible=true;
            else
            {
                possible = false;
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            if(2*(1422-num[n-1])<=200)
                possible = true;
            else possible = false;
        }

        if(possible)
            cout<<"POSSIBLE"<<endl;
        else cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
