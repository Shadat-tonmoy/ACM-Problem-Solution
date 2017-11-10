#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,in,out,num25,num50;
    bool possible;
    while(cin>>n)
    {
        possible = true;
        in = 0;
        out = 0;
        num25 = 0;
        num50 = 0;
        for(i=1; i<=n; i++)
        {
            cin>>m;
            out = m-25;
            //printf("in : %d out : %d\n",in,out);
            if(out<=in)
            {

                if(out==25 && num25>0)
                {
                    num25--;
                }
                else if(out==75)
                {
                    if(num50>0 && num25>0)
                    {
                        num50--;
                        num25--;
                    }
                    else if (num25>=3)
                        num25 = num25-3;
                    else possible = false;
                }
                else if(out!=0)
                    possible = false;

                if(possible)
                {
                    in+=25;
                    if(m==25)
                        num25++;
                    else if(m==50)
                        num50++;

                }


            }
            else
            {
                possible = false;

            }
        }
        if(possible)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;

}


