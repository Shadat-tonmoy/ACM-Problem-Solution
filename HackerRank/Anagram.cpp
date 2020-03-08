#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,c,len,index,need,extra;
    char str[100105];
    while(cin>>n)
    {
        for(l=1; l<=n; l++)
        {
            cin>>str;
            c=0;
            need = 0;
            extra = 0;
            map<char,int> freqA,freqB;
            map<char,int> :: iterator it;
            len = strlen(str);
            if(len%2==1)
            {
                cout<<-1<<endl;
                continue;
            }
            for(i=0;i<len;i++)
            {
                if(i<len/2)
                    freqA[str[i]]++;
                else freqB[str[i]]++;
            }
            for(it=freqB.begin();it!=freqB.end();it++)
            {
                if(freqB[it->first]>freqA[it->first])
                    need+=freqB[it->first]-freqA[it->first];

            }
            for(it=freqA.begin();it!=freqA.end();it++)
            {
                if(freqA[it->first]>freqB[it->first])
                    extra+=freqA[it->first]-freqB[it->first];

            }
//            cout<<negative<<" "<<positive<<endl;
            if(need==extra)
                cout<<need<<endl;
            else cout<<-1<<endl;


        }
    }

    return 0;
}
