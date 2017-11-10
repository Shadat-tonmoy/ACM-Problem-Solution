#include<bits/stdc++.h>
#define MAX 10000
using namespace std;
//bool status [MAX];
bool marked[MAX];
int prime_list [MAX];
void sieve()
{
    int i,j,k,l,m;
    memset(marked,true,sizeof marked);
    marked[1]=true;
    marked[2]=true;
    for(i=4; i<=MAX; i+=2)
        marked[i]=false;
    for(i=3; i*i<=MAX; i+=2)
    {
        if(marked[i])
        {
            for(j=i*i; j<=MAX; j+=i)
                marked[j]=false;
        }
    }
    m=0;
    for(i=1; i<=MAX; i++)
    {
        if(marked[i])
            prime_list[m++]=i;
    }
    //for(i=0;i<m;i++)
    //cout<<prime_list[i]<<endl;

}
using namespace std;
main()
{
    int n,i,j,k,l,sz,c,rem,pos;
    sieve();
    while(cin>>n>>c)
    {
        sz=0;
        for(i=0; prime_list[i]<=n; i++)
        {
            sz++;
            //cout<<prime_list[i]<<endl;
        }
        //cout<<c<<endl;
        printf("%d %d:",n,c);
        if(2*c>=sz)
        {
            for(i=0; prime_list[i]<=n; i++)
            {
                //sz++;
                cout<<" "<<prime_list[i];
            }
            cout<<endl<<endl;

        }
        else if(sz%2==0)
        {
            c = c*2;
            rem = sz-c;
            pos = rem/2;
            for(i=pos; i<pos+c; i++)
                cout<<" "<<prime_list[i];
            cout<<endl<<endl;
        }
        else
        {
            c = c*2 -1;
            rem = sz - c;
            pos = rem/2;
            for(i=pos; i<pos+c; i++)
                cout<<" "<<prime_list[i];
            cout<<endl<<endl;

        }



    }

    return 0;
}
/*void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
          cout << p << " ";
    void sieve(int n)
{
    int i,j,k;
    for(i=3;i*i<=n;i+=2)
    {
        if(marked[i]==false)
        {
            for(j=i*i;j<=n;j+=i)
                marked[j]=true;
        }
    }
}
}*/





