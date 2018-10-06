#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,a,b,c,key,value;
    while(cin>>n)
    {
        map<int,int> freq1,freq2;
        map<int,int> :: iterator it;
        for(i=0;i<n;i++)
        {
            cin>>a;
            freq1[a]++;
        }
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>a;
            freq2[a]++;
        }
        //printf("done");
        for(it=freq1.begin();it!=freq1.end();it++)
        {
            //printf("iterating..");
            key = it->first;
            if(freq1[key]<freq2[key])
                printf("%d ",key);
        }
        cout<<endl;


    }


    return 0;
}
