#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,one,digit[2000],remain,step;
    bool read=false;
    while(cin>>n)
    {
        read=false;
        one=0;
        step=0;
        for(i=0;i<n;i++)
        {
            cin>>digit[i];
            if(digit[i]==1)
                one++;
        }
        remain=one;
        bool done = false;
        for(i=0;i<n;)
        {
            if(digit[i]==1)
            {
                read=true;
                while(digit[i]==1)
                {
                    step++;
                    remain--;
                    i++;
                    if(remain==0)
                    {
                        done=true;
                        break;
                    }
                }
                if(done)
                    break;
            }
            else if(remain>0 && digit[i]==0 && read)
            {
                read=false;
                step++;
                while(digit[i]==0)
                {
                    i++;
                }
            }
            else i++;
        }
        cout<<step<<endl;
    }


    return 0;
}
