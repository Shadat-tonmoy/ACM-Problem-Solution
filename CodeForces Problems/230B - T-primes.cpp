#include<bits/stdc++.h>
#define MAX 1000006
using namespace std;
bool marked[MAX];
void sieve()
{
    int i,j,k;
    for(i=2; i<=MAX; i+=2)
        marked[i]=true;
    marked[2]=false;
    marked[1]=true;
    for(i=3; i*i<MAX; i+=2)
    {
        if(!marked[i])
        {
            for(j=2*i; j<=MAX; j+=i)
                marked[j]=true;
        }
    }
}

int main()
{
    long long int i,j,k,l,m,n,a,root;
    sieve();
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>a;
            root = sqrt(a);
            if(root*root == a)
            {
                if(!marked[root])
                    cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;

        }

    }





    return 0;
}
