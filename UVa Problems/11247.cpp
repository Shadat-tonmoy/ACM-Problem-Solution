#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int i,j,k,m,in;
    double x,v,ans,temp;
    while(cin>>m>>x)
    {

        if(m==0 && x==0)
            break;
        temp = (m-1)*100/(100-x);
        ans = (m-1)*100/(100-x);
        if(x==100 || m==1 || x==0 || ans<m)
            cout<<"Not found"<<endl;
        else if((long long int)ans<temp)
            cout<<(long long int)ans<<endl;
        else
        {
            cout<<(long long int)ans-1<<endl;
        }


    }

    return 0;
}
