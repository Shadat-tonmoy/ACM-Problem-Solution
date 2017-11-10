#include<bits/stdc++.h>
using namespace std;
int gcd (int a,int b)
{
    if(b==0)
        return a;
    else return gcd(b,a%b);
}
int main()
{
    int i,j,k,l,m,n;
    vector <int> num;
    vector <int> out;
    while(cin>>n)
    {
        int c=0;
        for(i=0;i<n;i++)
        {
            cin>>m;
            num.push_back(m);
        }
        for(i=0;i<num.size()-1;i++)
        {

            k=gcd(num[i],num[i+1]);
            if(k!=1)
            {
                //cout<<k<<endl;
                c++;
                out.push_back(num[i]);
                m=1;
                //cout<<num[i]<<endl;
                //cout<<gcd(m,num[i])<<endl<<gcd(m,num[i+1]);
                while((gcd(m,num[i])!=1)|| (gcd(m,num[i+1])!=1))
                {
                    //printf("While : \n");
                    //cout<<gcd(m,num[i])<<endl<<gcd(m,num[i+1]);
                    m++;
                }
                //printf("While : \n");
                    //m++;
                out.push_back(m);
            }
            else out.push_back(num[i]);
        }
        out.push_back(num[n-1]);
        cout<<c<<endl;
        for(i=0;i<out.size();i++)
            cout<<out[i]<<" ";
        cout<<endl;
        num.clear();
        out.clear();

    }

}
