#include<iostream>
using namespace std;
int main ()
{
    int i,j,k,n,l,m,num[100],a,b;
    while(cin>>n)
    {
        for(i=1; i<=n; i++)
        {
            a=0;
            b=0;
            for(j=0; j<10; j++)
            {
                cin>>num[j];
            }
            if(i==1)
                cout<<"Lumberjacks:"<<endl;
            for(k=0; k<10; k++)
            {
                if(num[k]>num[k+1])
                {
                    a++;
                }
                else if(num[k]<num[k+1])
                    b++;
            }
            if(a==9 || b==10)
                cout<<"Ordered"<<endl;
            else cout<<"Unordered"<<endl;

        }
    }

    return 0;
}
