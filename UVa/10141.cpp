#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;
int main ()
{
    bool blank = false;
    double m,n,p,d,r;
    int i,j,k=0,l=0,maxi;
    string name[10000],requirment[10000],meet_req[10000],selected;
    while(cin>>p>>n)
    {
        l++;
        maxi=0;
        if(p==0 && n==0)
            break;
        for(i=0; i<=p; i++)
            getline(cin,requirment[i]);
        for(i=0; i<n; i++)
        {
            getline(cin,name[i]);
            cin>>d>>r;
            if(r>maxi)
            {
                maxi=r;
                selected=name[i];
            }

            for(j=0; j<=r; j++)
                getline(cin,meet_req[j]);
        }
        if(blank) printf("\n");
        blank = true;
        printf("RFP #%d\n",l);
        cout<<selected<<endl;

        k++;
    }
    return 0;
}
