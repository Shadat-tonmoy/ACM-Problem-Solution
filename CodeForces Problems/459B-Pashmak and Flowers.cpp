#include<bits/stdc++.h>
using namespace std;
long long int num[200005];
int main()
{
    long long int i,j,k,l,a,b,c,d,maxi,mini,n,dif,ways;
    map<long long int,long long int> freq;
    while(cin>>n)
    {
        maxi=0;
        mini=99999999999999;
        //cout<<mini<<endl;
        for(i=0;i<n;i++)
        {
            cin>>num[i];
            maxi = max(maxi,num[i]);
            mini = min(mini,num[i]);
            freq[num[i]]++;
        }
        dif = maxi - mini;
        ways = freq[maxi]*freq[mini];
        if(dif==0)
        {
            ways = (n*(n-1))/2;
        }

        cout<<dif<<" "<<ways<<endl;
        freq.clear();




    }








    return 0;
}
