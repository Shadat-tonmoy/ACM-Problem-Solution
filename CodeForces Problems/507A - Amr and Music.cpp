#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,num[105],tmp[105],sum;
    vector<int> ans;
    while(cin>>n>>k)
    {
        for(i=0; i<n; i++)
        {
            cin>>num[i];
            tmp[i]=num[i];
        }
        sort(num,num+n);
        sum=0;
        c=0;
        /*for(i=0;i<n;i++)
            cout<<num[i]<<" ";
        cout<<endl;*/
        for(i=0; i<n; i++)
        {
            sum+=num[i];
            if(sum>k)
                break;
            c++;
            for(j=0; j<n; j++)
            {
                if(tmp[j]==num[i])
                {
                    ans.push_back(j+1);
                    tmp[j]=-1;
                    break;
                }
            }
        }
        cout<<c<<endl;
        if(c!=0)
        {
            for(i=0; i<ans.size(); i++)
                cout<<ans[i]<<" ";
            cout<<endl;
        }
        ans.clear();
    }

    return 0;
}
