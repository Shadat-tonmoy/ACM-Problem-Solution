#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
bool comp(long long int a,long long int b)
{
    return a>b;
}
bool isValid(long long int a,long long int b,long long int c)
{
    return a+b>c && a+c>b && b+c>a;
}
int main()
{
    long long int i,j,k,l,m,n,a,b,c,tc,sum,flag,num[100],max_perimeter,max_a,max_b,max_c,perimeter;
    while(cin>>n)
    {
        max_perimeter = 0;
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        sort(num,num+n,comp);
        for(i=0;i<n-1;i++)
        {
            a = num[i];
            b = num[i+1];
            for(j=0;j<n;j++)
            {
                if(j!=i && j!=i+1)
                {
                    c = num[j];
                    if(isValid(a,b,c))
                    {
                        //printf("%lld %lld %lld\n",a,b,c);
                        perimeter = a+b+c;
                        if(perimeter>max_perimeter)
                        {
                            max_perimeter = perimeter;
                            max_a = a;
                            max_b = b;
                            max_c = c;
                        }
                    }
                }

            }
        }
        if(max_perimeter==0)
            cout<<-1<<endl;
        else {
                if (max_a > max_b) swap(max_a, max_b);
                if (max_b > max_c) swap(max_b, max_c);
                if (max_a > max_b) swap(max_a, max_b);
                printf("%lld %lld %lld\n",max_a,max_b,max_c);

        }


    }




}
