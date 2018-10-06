#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,num[1000];
    while(cin>>n)
    {
        map<int,int> freq;
        map<int,int> :: iterator it;
        for(i=0;i<n;i++)
        {
            cin>>num[i];
            freq[num[i]]++;
        }
        for(it=freq.begin();it!=freq.end();it++)
        {
            if(it->second==1)
            {
                cout<<it->first<<endl;
                break;
            }
        }
    }



}












