#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,num[1000];
    while(cin>>n)
    {
        a=-1;
        b=-1;
        for(i=0;i<n;i++)
        {
            cin>>m;
            if(i==n-1)
                a=m;
            else if(i==n-2)
                b=m;
        }
        if(a!=-1 && b!=-1)
        {
            if(a>b && a<15)
                cout<<"UP"<<endl;
            else if(a>b && a==15)
                cout<<"DOWN"<<endl;
            else if(a<b && a>0)
                cout<<"DOWN"<<endl;
            else if(a<b && a==0)
                cout<<"UP"<<endl;
        }
        else if(a==0)
            cout<<"UP"<<endl;
        else if(a==15)
            cout<<"DOWN"<<endl;
        else cout<<-1<<endl;
    }



    return 0;

}


