#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,one,two,three,a,b,c,x,y;
    while(cin>>n)
    {
        one=0;
        two=0;
        three=0;
        c=0;
        int n_two;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(a==1)
                one++;
            else if(a==2)
                two++;
            else if(a==3)
                three++;
            else c++;
        }
        if(three<=one)
        {
            one=one-three;
            c+=three;
        }
        else
        {
            three=three-one;
            c+=one;
            one=0;
            c+=three;
        }
        n_two = 2*two;
        c+=n_two/4;
        two=n_two%4;
        if(two==2 && one==0)
            c++;
        else if(two==2 && (one==1 || one==2))
            c++;
        else if(two==2 && one>2)
        {
            one=one-2;
            c++;

            if(one%4==0)
                c+=one/4;
            else
            {
                while(one!=0)
                {
                    x=one%4;
                    y=one/4;
                    c+=y;
                    if(x<4)
                    {
                        c++;
                        break;
                    }
                }

            }
        }
        else if(two==0 && one>0)
        {
            //cout<<"True"<<endl;
            if(one%4==0)
                c+=one/4;
            else
            {
                while(one!=0)
                {
                    x=one%4;
                    y=one/4;
                    c+=y;
                    if(x<4)
                    {
                        c++;
                        break;
                    }
                }
            }


        }
        cout<<c<<endl;
    }


    return 0;
}
