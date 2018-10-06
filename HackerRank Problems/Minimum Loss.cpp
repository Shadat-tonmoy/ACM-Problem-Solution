#include<bits/stdc++.h>
using namespace std;
long long int num[200005];
int main()
{
    long long int i,j,k,l,m,n,a,b,c,maxi,pos,mini;
    while(cin>>n)
    {
        map<long long int,long long int> index;
        for(i=0; i<n; i++)
        {
            cin>>num[i];
            index[num[i]] = i;
        }
        mini = 9999999999999999;
        sort(num,num+n);
        for(i=0; i<n-1; i++)
        {
            if(index[num[i+1]] < index[num[i]])
            {
                mini = min(mini,num[i+1]-num[i]);
            }
        }
        cout<<mini<<endl;

    }

}
