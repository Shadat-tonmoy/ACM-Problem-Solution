#include<bits/stdc++.h>
using namespace std;
int i,j,k,l,m,n,a,b,c,tc,ans,list1[1000000],list2[1000000];
vector <int> intr(100000);
int main()
{
    vector <int> :: iterator it;
    while(cin>>tc)
    {
        bool found=false;
        for(l=1;l<=tc;l++)
        {
            cin>>m>>n;
            for(i=0;i<m;i++)
                cin>>list1[i];
            for(i=0;i<n;i++)
                cin>>list2[i];
            sort(list1,list1+m);
            sort(list2,list2+n);
            it =std::set_intersection(list1,list1+m,list2,list2+n,intr.begin());
            intr.resize(distance(intr.begin(),it));
            ans = (m+n) - (2*intr.size());
            cout<<ans<<endl;

        }

    }
    return 0;
}
