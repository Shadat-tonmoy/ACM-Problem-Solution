#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c;
    string lec[3005],word_a[3005],word_b[3005],ans[3005];
    while(cin>>n>>m)
    {
        for(i=0;i<m;i++)
        {
            cin>>word_a[i]>>word_b[i];
        }
        for(i=0;i<n;i++)
            cin>>lec[i];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(lec[i]==word_a[j])
                {
                    if(word_a[j].size()<word_b[j].size())
                        ans[i]=word_a[j];
                    else if(word_a[j].size()>word_b[j].size())
                        ans[i]=word_b[j];
                    else if(word_a[j].size()==word_b[j].size())
                        ans[i]=word_a[j];
                    break;
                }
            }
        }
        for(i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;

    }



    return 0;
}
