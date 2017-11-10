#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,min_move,tmp;
    set<int> uni;
    while(cin>>n>>m)
    {
        for(i=0;i<n;i++)
        {
            cin>>a;
            for(j=0;j<a;j++)
            {
                cin>>b;
                uni.insert(b);
            }
        }
        if(uni.size() == m)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        uni.clear();

    }


    return 0;

}


