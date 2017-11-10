#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    string str;
    map<string,int> freq;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>str;
            if(freq[str]==0)
            {
                cout<<"OK"<<endl;
                freq[str]++;
            }
            else
            {
                cout<<str<<freq[str]<<endl;
                freq[str]++;
            }
        }
        freq.clear();

    }
    return 0;
}
