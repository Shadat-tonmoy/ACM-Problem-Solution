#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,num[10000],mod[10000],x,y,a,b;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
        {
            cout<<n<<" "<<m<<endl;
            break;
        }
        bool f=false;
        bool flag=false;
        for(i=0; i<n; i++)
        {
            cin>>num[i];
            mod[i] = num[i] % m;
        }
        /*for(i=0; i<n; i++)
            cout<<mod[i]<<" ";
        cout<<endl;*/
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(mod[i]>=mod[j])
                {
                    swap(num[i],num[j]);
                    swap(mod[i],mod[j]);
                }
            }
        }
        for(k=0; k<n; k++)
            cout<<mod[k]<<" ";
        cout<<endl;
        for(k=0; k<n; k++)
            cout<<num[k]<<" ";
        cout<<endl;

        for(i=0; i<n;)
        {
            f=false;
            //cout<<"i is "<<i<<endl;
            for(j=i; j<n; j++)
            {
                if(mod[i]!=mod[j])
                {
                    a = j;
                    f = true;
                    break;
                }
                //else a = j;
            }
            /*for(i=0; i<n; i++)
                cout<<num[i]<<" ";
            cout<<endl;*/
            if(!f)
                a=j;
            //cout<<"A is "<<a<<endl;

            for(x=i; x<a; x++)
            {
                for(y=x+1; y<a; y++)
                {
                    // cout<<"printed"<<endl;
                    if((num[x]%2==0 && num[y]%2==1) ||(num[x]%2==0 && num[y]%2==-1) )
                    {
                        if((num[x]%2==0 && num[y]%2==-1))
                            flag = true;
                        //else flag = false;
                        swap(num[x],num[y]);

                    }

                }
            }
            for(k=0; k<n; k++)
                cout<<num[k]<<" ";
            cout<<endl;
            //cout<<i<<endl<<a<<endl;
            for(x=i; x<=a; x++)
            {
                if(num[x]%2==0)
                {
                    b=x;
                    break;
                }
            }
            //cout<<b<<endl;
            sort(num+b,num+a);
            if(flag)
                reverse(num+b,num+a);
            //cout<<"printed"<<endl;
            if(f)
                i=a;
            else i=n;
            //
            cout<<"i is "<<i<<endl;
        }
        cout<<n<<" "<<m<<endl;
        for(i=0; i<n; i++)
            cout<<num[i]<<endl;
    }

    return 0;
}
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
//-10 -11 -12 -13 -14 -15
