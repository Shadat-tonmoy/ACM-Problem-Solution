#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,t,d,A[1005],B[1005],q;
    while(cin>>q)
    {
        queue<int> data;
        for(i=1;i<=q;i++)
        {
            cin>>t;
            if(t==1)
            {
                cin>>n;
                data.push(n);
            }
            else if(t==2 && !data.empty())
                data.pop();
            else if(t==3 && !data.empty())
            {
                cout<<data.front()<<endl;
            }

        }




    }


}












