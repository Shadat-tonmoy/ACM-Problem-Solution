#include<bits/stdc++.h>
using namespace std;
int primeList[1205];
bool isPrime(int n)
{
    int i,j;
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
void generatePrimeList(int n)
{
    int i,j=1,k,c=0;
    for(i=2;; i++)
    {
        if(isPrime(i))
        {
            c++;
            primeList[j]=i;
            j++;
            if(c==n)
            {
                return;
            }
        }
    }
}
int main()
{
    int i,j,k,l,m,n,a,b,c,p,q,top;
    generatePrimeList(1200);
    while(cin>>n>>q)
    {
        vector<stack<int> > pileA,pileB;
        stack<int> tmp;
        for(i=0; i<n; i++)
        {
            cin>>a;
            tmp.push(a);
        }
        pileA.push_back(tmp);

        for(i=1; i<=q; i++)
        {
            stack<int> tmpA,tmpB;
            while(!pileA[i-1].empty())
            {
                top = pileA[i-1].top();
                pileA[i-1].pop();
                if(top%primeList[i]==0)
                {
                    tmpB.push(top);
                    //pileB[i].push(top);
                }
                else
                {
                    tmpA.push(top);
                    //pileA[i].push(top);
                }
            }
            pileA.push_back(tmpA);
            pileB.push_back(tmpB);


        }
        int aSize = pileA.size(), bSize = pileB.size();
        for(i=0; i<bSize; i++)
        {
            while(!pileB[i].empty())
            {
                top = pileB[i].top();
                cout<<top<<endl;
                pileB[i].pop();
            }
        }
        while(!pileA[aSize-1].empty())
        {
            top = pileA[aSize-1].top();
            pileA[aSize-1].pop();
            cout<<top<<endl;
        }
    }





    return 0;
}
