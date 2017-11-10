#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,a[10000],b,index;
    stack <int> s;
    while(cin>>n)
    {
        if(n==0)
            break;
        while(cin>>a[0])
        {
            if(a[0]==0)
            {
                cout<<endl;
                break;
            }
            for(i=1;i<n;i++)
                cin>>a[i];
            b=1;
            index=0;
            while(b<=n)
            {
                s.push(b);
                while((!s.empty()) && (s.top()==a[index]))
                {
                    s.pop();
                    index++;
                    if(index>=n)
                        break;
                }
                b++;
            }
            if(s.empty())
                cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
            while(!s.empty())
            {
                s.pop();
            }
        }
    }

    return 0;
}
