#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,t,d,A[1005],B[1005],q;
    while(cin>>q)
    {
        for(m=1;m<=q;m++)
        {
            cin>>n>>k;
            for(i=0;i<n;i++)
                cin>>A[i];
            for(i=0;i<n;i++)
                cin>>B[i];
            sort(A,A+n);
            sort(B,B+n);
            map<int,bool> visited;
            int found = 0;
            for(i=0;i<n;i++)
            {
                a = A[i];
                for(j=0;j<n;j++)
                {
                    if(a+B[j]>=k && !visited[j])
                    {
                        visited[j]=true;
                        found++;
                        break;
                    }
                }
            }
            //cout<<found<<endl;
            if(found==n)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }




    }


}












