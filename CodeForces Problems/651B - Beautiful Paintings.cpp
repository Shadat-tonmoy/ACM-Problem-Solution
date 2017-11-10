#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,x_visited[2000],y_visited[2000],num[2000];
    while(cin>>n)
    {
        for(i=0;i<n;i++)
            cin>>num[i];
        sort(num,num+n);
        memset(x_visited,0,sizeof x_visited);
        memset(y_visited,0,sizeof y_visited);
        c=0;
        for(i=0;i<n;i++)
        {
            if(!x_visited[i])
                x_visited[i]=1;
            for(j=i+1;j<n;j++)
            {
                if(num[j]>num[i] && !y_visited[j])
                {
                    y_visited[j]=1;
                    c++;
                    break;
                }
            }
        }
        cout<<c<<endl;
    }


    return 0;
}
