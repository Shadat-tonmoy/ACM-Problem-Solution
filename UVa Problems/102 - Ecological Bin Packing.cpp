#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
std::vector<string> combinations;
void generateCombinations()
{
    combinations.push_back("BCG");
    combinations.push_back("BGC");
    combinations.push_back("CBG");
    combinations.push_back("CGB");
    combinations.push_back("GBC");
    combinations.push_back("GCB");
}
int main() 
{
    long long int i,j,k,l,m,n,a,b,c,d,x,y,z,ans,sum,mini,B[5],C[5],G[5];
    string miniComb;
    generateCombinations();
    while(cin>>a>>b>>c)
    {
        B[0] = a;
        G[0] = b;
        C[0] = c;
        for(i=1;i<3;i++)
        {
            cin>>B[i]>>G[i]>>C[i];
        }
        mini = 99999999999999999;
        for(x=0;x<combinations.size();x++)
        {
            string comb = combinations[x];
            sum = 0;
            for(i=0;i<comb.size();i++)
            {
                if(comb[i]=='B')
                {
                    for(j=0;j<3;j++)
                    {
                        if(i!=j)
                            sum+=B[j];
                    }
                }
                else if(comb[i]=='C')
                {
                    for(j=0;j<3;j++)
                    {
                        if(i!=j)
                            sum+=C[j];
                    }
                }
                else if(comb[i]=='G')
                {
                    for(j=0;j<3;j++)
                    {
                        if(i!=j)
                            sum+=G[j];
                    }
                }
            }
            if(sum<mini)
            {
                mini = sum;
                miniComb = comb;
            }
            
        }
        cout<<miniComb<<" "<<mini<<endl;
        
    }
    
    
    
  
}