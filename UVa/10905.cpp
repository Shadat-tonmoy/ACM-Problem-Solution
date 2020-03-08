#include<bits/stdc++.h>
using namespace std;
bool analys(int n,int m)
{
    int dig;
    int temp = n;
    while(temp!=0)
    {
        dig=temp%10;
        temp=temp/10;
    }
    if(dig==m)
        return true;
    else return false;
}
int main()
{
    int i,j,k,l,m,n,a;
    vector <int> num;
    vector <int> app;
    vector <int> one;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>m;
            num.push_back(m);
        }
        sort(num.begin(),num.end());
        for(i=0;i<num.size();i++)
        {
            if(num[i]%10 == num[i])
            {
                int temp = num[i];
                //num.erase(num.begin()+i);
                one.push_back(temp);
                cout<<num[i]<<endl;
            }
            else
            {
                a=i;
                break;
            }
        }
        for(i=0;i<num.size();i++)
        {
            if(i==a)
                break;
            num.erase(num.begin()+i);
        }
        for(i=0;i<num.size();i++)
            cout<<num[i]<<" ";
        cout<<endl;
        for(i=a;i<num.size();i++)
            cout<<num[i]<<" ";
        cout<<endl;
        for(i=0;i<one.size();i++)
            cout<<one[i]<<" ";
        cout<<endl;
        for(i=9;i>=1;i--)
        {
            for(j=num.size()-1;j>=0;j--)
            {
                if(analys(num[j],i))
                {
                    app.push_back(num[j]);
                    num.erase(num.begin()+j);
                }
            }
        }
        for(i=0;i<app.size();i++)
            cout<<app[i];
        cout<<endl;
        num.clear();
        app.clear();
    }

    return 0;
}
