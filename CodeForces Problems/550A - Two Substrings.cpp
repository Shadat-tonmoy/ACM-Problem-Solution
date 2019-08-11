#include<bits/stdc++.h>
using namespace std;
int positionAB[100001],positionBA[100001];
int main()
{
    int i,j,k,l,m,n,a,b,c,sum,posA,posB,pos2A,pos2B;
    string str;
    set<int> uni;
    bool foundAB,foundBA,found;
    while(cin>>str)
    {
        foundAB = false;
        foundBA = false;
        found = false;
        j=0;
        k=0;
        for(i=0;i<str.size();i++)
        {
            if(str[i]=='A'  && str[i+1] =='B')
            {
                positionAB[j]=i;
                j++;
                foundAB = true;
            }

            if(str[i]=='B'  && str[i+1] =='A')
            {
                positionBA[k]=i;
                k++;
                foundBA = true;
            }
            if(foundAB && foundBA)
            {
                for(l=0;l<j;l++)
                {
                    for(m=0;m<k;m++)
                    {
                        if(abs(positionAB[l] - positionBA[m]) >1 )
                        {
                            found = true;
                            break;
                        }
                    }
                    if(found)
                        break;
                }
            }

        }
        if(found)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        uni.clear();

    }


    return 0;

}


