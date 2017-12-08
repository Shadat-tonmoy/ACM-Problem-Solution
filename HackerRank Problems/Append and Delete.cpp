#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,p,m,n,a,b,tc,ans,sz1,sz2,index,dif,pos,mini,req;
    string str1,str2;
    while(cin>>str1)
    {
        cin>>str2;
        cin>>k;
        if(str1==str2)
        {
            sz1=str1.size();
            if(k>=2*sz1)
                cout<<"Yes"<<endl;
            else if(k>sz1)
            {
                dif = k - sz1;
                if(dif%2==0)
                    cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            else if(k<=sz1)
            {
                if(k%2==0)
                    cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
        }
        else
        {
            sz1 = str1.size();
            sz2 = str2.size();
            mini = min(sz1,sz2);
            pos = mini;
            for(i=0;i<mini;i++)
            {
                if(str1[i]!=str2[i])
                {
                    pos=i;
                    break;
                }
            }
            a = sz1 - pos;
            b = sz2 - pos;
            req = a+b;

            if(k>req)
            {
                dif = k - req;
                if(dif>=2*pos)
                    cout<<"Yes"<<endl;
                else if(dif<=pos && dif%2==0)
                    cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            else if(k==req)
                cout<<"Yes"<<endl;
            else if(k<req)
                cout<<"No"<<endl;


        }
    }
    return 0;
}
