#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,c,lenA,lenB,index,need,extra;
    char strA[100105],strB[100005];
    while(cin>>strA>>strB)
    {
        lenA = strlen(strA);
        lenB = strlen(strB);
        map<char,int> freqA,freqB;
        map<char,int> :: iterator it;
        for(i=0;i<lenA;i++)
            freqA[strA[i]]++;
        for(i=0;i<lenB;i++)
            freqB[strB[i]]++;
        c=0;
        for(it=freqA.begin();it!=freqA.end();it++)
        {
            if(freqA[it->first]>freqB[it->first])
            {
                c+=freqA[it->first]-freqB[it->first];
                freqA[it->first]=freqB[it->first];
            }
        }
        for(it=freqB.begin();it!=freqB.end();it++)
        {
            if(freqB[it->first]>freqA[it->first])
            {
                c+=freqB[it->first]-freqA[it->first];
                freqB[it->first]=freqA[it->first];
            }
        }
        cout<<c<<endl;

    }

    return 0;
}
