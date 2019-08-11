#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,key,num[3000],ans[2001],unique_num[2000];
    map<int,int> freq;
    while(cin>>n)
    {
        j=0;
        for(i=0;i<n;i++)
        {
            cin>>num[i];
            if(freq[num[i]]==0)
            {
                unique_num[j]=num[i];
                j++;

            }
            freq[num[i]]++;
        }
        sort(unique_num,unique_num+j);
        for(i=0;i<n;i++)
        {
            ans[i]=0;
            for(k=j-1;k>=0;k--)
            {
                if(num[i]<unique_num[k])
                {
                    ans[i] += freq[unique_num[k]];
                }
                else break;
            }
        }
        for(i=0;i<n;i++)
            cout<<ans[i]+1<<" ";
        cout<<endl;
        freq.clear();
    }


    return 0;

}


