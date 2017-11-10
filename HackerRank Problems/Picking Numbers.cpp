#include<bits/stdc++.h>
using namespace std;
int num[300];
vector<int> piccked;
bool isPickable(int n)
{
    int i;
    bool pickable = true;
    for(i=0;i<piccked.size();i++)
    {
        if(abs(n-piccked[i])<=1)
            pickable = true;
        else
        {
            pickable = false;
            break;
        }
    }
    if(pickable)
        return true;
    else return false;

}
int main()
{
    int i,j,k,l,m,n,a,b,c,s,maxi;
    while(cin>>n)
    {
        maxi=0;
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        //sort(num,num+n);
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(i!=j && abs(num[j]-num[i])<=1)
                {
                    if(isPickable(num[j]))
                        piccked.push_back(num[j]);
                }
            }
            if(isPickable(num[n-1]))
                piccked.push_back(num[n-1]);
            int sz = piccked.size();
            maxi = max(maxi,sz+1);
            piccked.clear();
        }
        cout<<maxi<<endl;
    }

    return 0;
}
