#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,num[10000],t[1000],n,a,b,c,tc;
    while(cin>>tc)
    {
        for(a=1; a<=tc; a++)
        {
            cin>>n;
            for(i=0; i<n; i++)
                cin>>num[i];
            for(i=0; i<n; i++)
                cin>>t[i];
            for(i=0; i<n; i++)
            {
                if(num[i]==1)
                {
                    if(t[i]==1)
                        cout<<".";
                    else if(t[i]==2)
                        cout<<",";
                    else if(t[i]==3)
                        cout<<"?";
                    else if(t[i]==4)
                        cout<<"\"";
                }
                else if(num[i]==2)
                {
                    if(t[i]==1)
                        cout<<"a";
                    else if(t[i]==2)
                        cout<<"b";
                    else if(t[i]==3)
                        cout<<"c";
                }
                else if(num[i]==3)
                {
                    if(t[i]==1)
                        cout<<"d";
                    else if(t[i]==2)
                        cout<<"e";
                    else if(t[i]==3)
                        cout<<"f";

                }
                else if(num[i]==4)
                {
                    if(t[i]==1)
                        cout<<"g";
                    else if(t[i]==2)
                        cout<<"h";
                    else if(t[i]==3)
                        cout<<"i";

                }
                else if(num[i]==5)
                {
                    if(t[i]==1)
                        cout<<"j";
                    else if(t[i]==2)
                        cout<<"k";
                    else if(t[i]==3)
                        cout<<"l";

                }
                else if(num[i]==6)
                {
                    if(t[i]==1)
                        cout<<"m";
                    else if(t[i]==2)
                        cout<<"n";
                    else if(t[i]==3)
                        cout<<"o";

                }
                else if(num[i]==7)
                {
                    if(t[i]==1)
                        cout<<"p";
                    else if(t[i]==2)
                        cout<<"q";
                    else if(t[i]==3)
                        cout<<"r";
                    else if(t[i]==4)
                        cout<<"s";
                }
                else if(num[i]==8)
                {
                    if(t[i]==1)
                        cout<<"t";
                    else if(t[i]==2)
                        cout<<"u";
                    else if(t[i]==3)
                        cout<<"v";

                }
                else if(num[i]==9)
                {
                    if(t[i]==1)
                        cout<<"w";
                    else if(t[i]==2)
                        cout<<"x";
                    else if(t[i]==3)
                        cout<<"y";
                    else if(t[i]==4)
                        cout<<"z";

                }
                else if(num[i]==0)
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }

    }

    return 0;
}
