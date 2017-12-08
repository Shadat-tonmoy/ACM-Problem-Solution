/*
insertion sort
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,num[10000],hole,value;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
            cin>>num[i];

        for(i=1; i<n; i++)
        {
            value = num[i];
            hole = i;
            while(hole>0 && num[hole-1]>value)
            {
                num[hole]=num[hole-1];
                hole--;

            }
            num[hole]=value;
            for(j=0; j<n; j++)
                cout<<num[j]<<" ";
            cout<<endl;
        }
        for(j=0; j<n; j++)
            cout<<num[j]<<" ";
        cout<<endl;
    }

    return 0;
}
