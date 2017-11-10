#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,num[100005],maxi,a,mini,dif;
    map <int,int> freq,strt,fin,range;
    map <int,int> :: iterator it;
    while(cin>>n)
    {
        maxi=0;
        mini=9999999999;
        for(i=0; i<n; i++)
        {
            cin>>num[i];
            freq[num[i]]++;
            if(freq[num[i]]==1)
                strt[num[i]]=i+1;
            if(freq[num[i]]>=1)
                fin[num[i]]=i+1;
            if(freq[num[i]]>=maxi)
            {
                maxi=freq[num[i]];
            }
        }
        for(it=freq.begin();it!=freq.end();it++)
        {
           //cout<<it->first<<" "<<it->second<<endl;
            if(it->second==maxi)
            {
                m=it->first;
                dif=fin[m]-strt[m];
                if(dif<mini)
                {
                    mini=dif;
                    a=m;
                }
            }

        }
        cout<<strt[a]<<" "<<fin[a]<<endl;
        freq.clear();
        strt.clear();
        fin.clear();
        range.clear();



    }



    return 0;

}


