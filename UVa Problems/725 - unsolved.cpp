#include<bits/stdc++.h>
using namespace std;

bool unq_dgt (int n)
{
    int dig[100],a,flag;
    int i,j;
    a=0;
    flag = 0;
    int tmp = n;
    while(tmp != 0)
    {
        dig[a++]=tmp%10;
        tmp=tmp/10;
    }
    if(n<10000)
        dig[a++]=0;
    for(i=0; i<a; i++)
    {
        for(j=0; j<a; j++)
        {
            if(i!=j && dig[i]==dig[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        return false;
    else if(flag==0)
        return true;
}
bool different (int m,int n)
{
    int i,j,k,a,b,dig1[100],dig2[1000],ck=0;
    int tmp = n;
    a=0;
    b=0;
    while(tmp!=0)
    {
        dig2[a++]=tmp%10;
        tmp=tmp/10;
    }
    if(m<10000)
        dig1[b++]=0;
    while(m!=0)
    {
        dig1[b++]=m%10;
        m=m/10;
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<a; j++)
        {
            if(dig1[i]==dig2[j])
            {
                ck=1;
                break;
            }
        }
        if(ck==1)
            break;
    }
    if(ck==1)
        return false;
    else return true;

}
int main()
{
    int i,j,k,l,m,n,flag=0,ck=0;
    while(scanf("%d", &n), n)
    {
        ck++;
        if (ck > 1)
            printf("\n");
        if(n==0)
            break;
        flag=0;
        for(i=1234; i<=50000; i++)
        {
            if(unq_dgt(i))
            {
                int mlt = i*n;
                if(mlt < 100000 && mlt > 9999)
                {
                    if(unq_dgt(mlt))
                    {
                        if(different(i,mlt))
                        {
                            cout<<mlt<<" / "<<setw(5)<<setfill('0')<<i<<" = "<<n<<endl;
                            flag=1;
                        }
                    }
                }
            }
        }
        if(flag==0)
            printf("There are no solutions for %d.\n",n);
    }

    return 0;
}
