#include<bits/stdc++.h>
using namespace std;
bool isHoliday(int);
map<int,bool> holiday;
int main()
{
    int i,j,k,l,m,n,uni,num[100005],maxi,c,x,tc;
    bool found;
    while(cin>>tc)
    {
        for(l=1;l<=tc;l++)
        {
            set<int> ans;
            cin>>x>>n;
            for(i=0;i<n;i++)
            {
                cin>>num[i];
            }
            for(i=0;i<n;i++)
            {
                m = num[i];
                for(j=m;j<=x;j+=m)
                {
                    if(!isHoliday(j))
                        ans.insert(j);
                }
            }
            cout<<ans.size()<<endl;

        }
    }



}
bool isHoliday(int n)
{
    if(n%7==6 || n%7==0)
        return true;
    else return false;


}
