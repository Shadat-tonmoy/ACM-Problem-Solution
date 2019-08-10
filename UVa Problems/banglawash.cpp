#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    int i,j,k,l,t,m,n,c_b,c_w,c_t,c_a,mi,a,b,c,d,x,y,z;
    char str[10000];
    while(cin>>t)
    {
        for(l=1; l<=t; l++)
        {
            c_b=0;
            c_w=0;
            c_t=0;
            c_a=0;
            cin>>n;
            for(i=1; i<=n; i++)
            {
                cin>>str[i];
                if(str[i]=='B')
                    c_b++;
                else if(str[i]=='W')
                    c_w++;
                else if(str[i]=='T')
                    c_t++;
                else if(str[i]=='A')
                    c_a++;
            }
            if(c_b==n)
                printf("Case %d: BANGLAWASH\n",l);
            else if(c_w==n)
                printf("Case %d: WHITEWASH\n",l);
            else if(c_a==n)
                printf("Case %d: ABANDONED\n",l);
            else if(c_a>0)
            {
                m=n-c_a;
                if(c_w==m)
                    printf("Case %d: WHITEWASH\n",l);
                else if(c_b==m)
                    printf("Case %d: BANGLAWASH\n",l);
                else if(c_b>c_w)
                {
                    printf("Case %d: BANGLADESH %d - %d\n",l,c_b,c_w);
                }
                else if(c_w>c_b)
                {
                    printf("Case %d: WWW %d - %d\n",l,c_w,c_b);
                }
                else if(c_w==c_b)
                    printf("Case %d: DRAW %d %d\n",l,c_w,c_t);

            }
            else if(c_a==0)
            {
                m=n-c_a;
                if(c_w==m)
                    printf("Case %d: WHITEWASH\n",l);
                else if(c_b==m)
                    printf("Case %d: BANGLAWASH\n",l);
                else if(c_b>c_w)
                {
                    printf("Case %d: BANGLADESH %d - %d\n",l,c_b,c_w);
                }
                else if(c_w>c_b)
                {
                    printf("Case %d: WWW %d - %d\n",l,c_w,c_b);
                }
                else if(c_w==c_b)
                    printf("Case %d: DRAW %d %d\n",l,c_w,c_t);

            }
            else if(c_t>0)
            {
                if(c_b>c_w)
                {
                    printf("Case %d: BANGLADESH %d - %d\n",l,c_b,c_w);
                }
                else if(c_w>c_b)
                {
                    printf("Case %d: WWW %d - %d\n",l,c_w,c_b);
                }
                else if(c_w==c_b)
                    printf("Case %d: DRAW %d %d\n",l,c_b,c_t);

            }
            else if(c_t==0)
            {
                if(c_b>c_w)
                {
                    printf("Case %d: BANGLADESH %d - %d\n",l,c_b,c_w);
                }
                else if(c_w>c_b)
                {
                    printf("Case %d: WWW %d - %d\n",l,c_w,c_b);
                }
                else if(c_w==c_b)
                    printf("Case %d: DRAW %d %d\n",l,c_b,c_t);

            }
        }
    }

    return 0;
}
