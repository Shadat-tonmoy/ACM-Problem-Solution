/*
insertion sort
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,num[10000],hole,value,c;
    while(cin>>n)
    {
        c=0;
        for(i=0;i<n;i++)
            cin>>num[i];

        for(i=1;i<n;i++)
        {
            value = num[i];
            hole = i;
            while(hole>0 && num[hole-1]>value)
            {
                num[hole]=num[hole-1];
                hole--;
                c++;
            }
            num[hole]=value;
        }
        cout<<c<<endl;
    }

    return 0;
}
