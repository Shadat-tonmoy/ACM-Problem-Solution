#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,c,lenA,lenB,index,need,extra;
    char strA[100105];
    while(cin>>strA)
    {
        lenA = strlen(strA);
        map<char,int> freq;
        map<char,int> :: iterator it;
        bool no = false;
        for(i=0; i<lenA; i++)
            freq[strA[i]]++;
        c=0;
        if(lenA%2==0)
        {
            for(it=freq.begin(); it!=freq.end(); it++)
            {
                if(freq[it->first]%2==1)
                {
                    no = true;
                    break;
                }
            }
        }
        else
        {
            for(it=freq.begin(); it!=freq.end(); it++)
            {
                if(freq[it->first]%2==1)
                {
                    c++;
                }
                if(c>1)
                {
                    no = true;
                    break;
                }
            }
        }
        if(no)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }

    return 0;
}
