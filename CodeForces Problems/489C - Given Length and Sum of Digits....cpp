#include<bits/stdc++.h>
using namespace std;
int n,s;
vector<int> mini,maxi;
void find_min()
{
    int i,j,k,l,m,sum,rem,rem_dig;
    rem = s;
    rem_dig = n;
    for(i=1; i<=n; i++)
    {
        if(rem<=0)
            mini.push_back(0);
        else if(i==n)
            mini.push_back(rem);
        else
        {
            if(i==1)
                k=1;
            else k=0;
            for(j=k; j<=9; j++)
            {
                double tmp = rem - j;
                double tmp_dig = n-i;
                double div = tmp/tmp_dig;
                //printf("tmp : %lf tmp_dig : %lf div : %lf\n",tmp,tmp_dig,div);
                if(div<=9.0 && div>=0.0)
                {
                    rem = rem - j;
                    if(rem<0)
                        rem=0;
                    mini.push_back(j);
                    //printf("pushed : %d\n",j);
                    break;
                }
            }

        }
    }
    return;
}
void find_max()
{
    int i,j,k,l,m,sum,rem,rem_dig;
    rem = s;
    rem_dig = n;
    for(i=1; i<=n; i++)
    {
        if(rem<=0)
            maxi.push_back(0);
        else if(i==n)
            maxi.push_back(rem);
        else
        {
            for(j=9; j>=1; j--)
            {
                double tmp = rem - j;
                double tmp_dig = n-i;
                double div = tmp/tmp_dig;
                //printf("tmp : %lf tmp_dig : %lf div : %lf\n",tmp,tmp_dig,div);
                if(div<=9.0 && div>=0.0)
                {
                    rem = rem - j;
                    maxi.push_back(j);
                    //printf("pushed : %d\n",j);
                    break;
                }
            }

        }
    }
    return;


}
int main()
{
    int i,j,k,l,m,a,b,c;
    while(cin>>n>>s)
    {
        mini.clear();
        maxi.clear();
        double div = (double)s/n;
        //cout<<div<<endl;
        if(s==0 && n==1)
            cout<<0<<" "<<0<<endl;
        else if(s==0 && n>1)
            cout<<-1<<" "<<-1<<endl;
        else if(div>9.0)
            cout<<-1<<" "<<-1<<endl;
        else
        {
            find_min();
            find_max();
            for(i=0; i<mini.size(); i++)
                cout<<mini[i];
            cout<<" ";
            for(i=0; i<maxi.size(); i++)
                cout<<maxi[i];
            cout<<endl;
        }

    }
    return 0;
}
