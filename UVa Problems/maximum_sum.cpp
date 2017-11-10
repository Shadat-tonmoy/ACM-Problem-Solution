#include<iostream>
using namespace std;
int main()
{
    int n,j,k,l,num[10000],a,t;
    while(cin>>n && n!=0)
    {
        j=0;
        k=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a>=0)
            {
                num[j++]=a;
            }
        }
        for(int i=0;i<j;i++)
        {
            if(num[i]==0)
                k++;
        }
        if(k==j)
            cout<<0<<endl;
        else
        {
            for(int i=0;i<j;i++)
            {
                if(num[i]>0)
                    cout<<num[i]<<" ";
            }
            cout<<endl;
        }

    }


    return 0;
}
