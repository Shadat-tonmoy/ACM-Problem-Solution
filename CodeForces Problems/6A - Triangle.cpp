#include<bits/stdc++.h>
using namespace std;
double cal(double a,double b,double c)
{
    double s = (a+b+c)/2;
    double area;
    if(a>s || b>s || c>s)
        return -1;
    else if(a==s || b==s || c==s)
        return 0;
    else
    {
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
    }
}
int main()
{
    int i,j,k,l,m,n;
    double a,b,c,d,ans[4];
    while(cin>>a>>b>>c>>d)
    {
        ans[0]=cal(a,b,c);
        ans[1]=cal(a,c,d);
        ans[2]=cal(b,c,d);
        ans[3]=cal(a,b,d);
        //cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<endl;
        if(ans[0]==-1 && ans[1]==-1 && ans[2]==-1 && ans[3]==-1)
            cout<<"IMPOSSIBLE"<<endl;
        else if(ans[0]>0 || ans[1]>0 || ans[2]>0 || ans[3]>0)
            cout<<"TRIANGLE"<<endl;
        else if(ans[0]==0 || ans[1]==0 || ans[2]==0 || ans[3]==0)
            cout<<"SEGMENT"<<endl;

    }

}


