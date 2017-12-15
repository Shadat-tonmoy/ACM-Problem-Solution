#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,c,lenA,lenB,index,need,extra;
    char strA[100105],strB[100005];
    while(cin>>n)
    {
        for(m=1;m<=n;m++)
        {
            bool found = false;
            cin>>strA>>strB;
            for(i=0;strA[i]!='\0';i++)
            {
                for(j=0;j<strB[j]!='\0';j++)
                {
                    if(strA[i]==strB[j])
                    {
                        found = true;
                        break;
                    }
                }
                if(found)
                    break;
            }
            if(found)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}
