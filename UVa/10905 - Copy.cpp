#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,num[10000],mod[10000],x,y,a,b;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
        {
            cout<<n<<" "<<m<<endl;
            break;
        }
        bool f=false;
        for(i=0;i<n;i++)
        {
            cin>>num[i];
            mod[i] = num[i] % m;
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(mod[i]>=mod[j])
                {
                    swap(num[i],num[j]);
                    swap(mod[i],mod[j]);
                }
            }
        }
        /*for(i=0;i<n;i++)
            cout<<mod[i]<<" ";
        cout<<endl;*/
        /*for(i=0;i<n;i++)
            cout<<num[i]<<" ";
        cout<<endl;*/
        for(i=0;i<n;)
        {
            f=false;
            //cout<<"i is "<<i<<endl;
            for(j=i;j<n;j++)
            {
                if(mod[i]!=mod[j])
                {
                    a = j;
                    f = true;
                    break;
                }
                //else a = j;
            }
            if(!f)
                a=j;
            //cout<<"A is "<<a<<endl;
            for(x=i;x<a;x++)
            {
                for(y=x+1;y<a;y++)
                {
                    if(num[x]%2==0 && num[y]%2==1)
                        swap(num[x],num[y]);
                }
            }
            for(x=i;x<a;x++)
            {
                if(num[x]%2==0)
                {
                    b=x;
                    break;
                }
            }
            sort(num+b,num+a);
            if(f)
                i=a;
            else i=n;
            //cout<<"i is "<<i<<endl;
        }
        cout<<n<<" "<<m<<endl;
        for(i=0;i<n;i++)
            cout<<num[i]<<endl;
    }

    return 0;
}
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
