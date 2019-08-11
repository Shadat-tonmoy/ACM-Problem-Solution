#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,nx,ny,p;
    string str;
    while(cin>>str)
    {
        nx=0;
        ny=0;
        for(i=0;i<str.size();i++)
        {
            if(str.at(i)=='x')
                nx++;
            else ny++;
        }
        //cout<<"nx : "<<nx<<" ny :"<<ny<<endl;
        if(nx<ny)
        {
            ny=ny-nx;
            nx=0;
        }
        else if(ny<nx)
        {
            nx=nx-ny;
            ny=0;
        }
        //cout<<"nx : "<<nx<<" ny :"<<ny<<endl;
        for(i=1;i<=nx;i++)
            cout<<'x';
        for(i=1;i<=ny;i++)
            cout<<'y';
        cout<<endl;
    }
    return 0;
}
