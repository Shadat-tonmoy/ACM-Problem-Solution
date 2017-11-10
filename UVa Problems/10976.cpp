#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,k,c;
    while(cin>>k)
    {
        c=0;
        for(i=k+1; i<=(2*k); i++)
        {
           if((i*k)%(i-k)==0)
                c++;
        }
        cout<<c<<endl;
        for(i=k+1; i<=(2*k); i++)
        {
            int con = (i*k)%(i-k);
            int dom = (i*k)/(i-k);
            if(con==0)
            {
                printf("1/%d = 1/%d + 1/%d\n",k,dom,i);

            }
            //cout<<x[i]<<endl;//
            //cout<<y[i]<<endl;//printf("1/%d = 1/%lf + 1/%lf\n",k,x[i],y[i]);
        }
    }

    return 0;
}
