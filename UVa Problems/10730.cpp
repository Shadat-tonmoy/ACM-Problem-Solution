#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,flag=0;
    vector <int> num;
    while(cin>>n)
    {
        flag = 0;
        if(n==0)
            break;
        scanf(":");
        for(i=0; i<n; i++)
        {
            cin>>a;
            num.push_back(a);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(j+1<n)
                {
                    if(fabs(num[i]-num[j])==fabs(num[j]-num[j+1]))
                    {
                        flag=1;
                        break;
                    }
                }

            }
            if(flag==1)
                break;
        }
        if(flag==1)
            cout<<"no"<<endl;
        else cout<<"yes"<<endl;
        num.clear();
    }


    return 0;
}
