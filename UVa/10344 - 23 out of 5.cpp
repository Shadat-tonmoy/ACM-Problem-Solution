#include <bits/stdc++.h>
using namespace std;
#define SIZE 20
long long int num[SIZE],n,perm[SIZE];
bool found = false,visited[SIZE],permVisited[SIZE];
void reset()
{
    for(int i=0;i<SIZE;i++)
        visited[i] = false;
    found = false;
    
}
void resetPerm()
{
    for(int i=0;i<SIZE;i++)
        permVisited[i] = false;
    found = false;
    
}

void solve(long long int expPos, long long int operPos, long long int result)
{
    // cout<<"expPos "<<expPos<<" operPos "<<operPos<<endl;
    if(found)
        return;
    if(expPos>=4 || operPos>=3)
    {
        // printf("Express %d operPos %d result %d\n",expPos,operPos,result);
        if(result==23)
        {
            found = true;
        }
        return;
    }
    for(int i=0;i<3;i++)
    {
        if(!visited[expPos])
        {
            visited[expPos] = true;
            long long int left,right;
            if(expPos==0)
            {
                left = perm[0];
                right = perm[1];
            }
            else
            {
                left = result;
                right = perm[expPos+1];
            }
            long long int sum = 0;
            switch(i)
            {
                case 0:
                    sum = left+right;
                    break;
                case 1:
                    sum = left - right;
                    break;
                case 2:
                    sum = left * right;
                    break;
                default:
                    break;
            }
            solve(expPos+1,i,sum);
            visited[expPos] = false;
            // cout<<"Dome "<<j<<" i "<<i<<endl;
            // visited[operPos][expPos] = false;
            // solve(expPos,operPos+1,result);
        }
        
    }
    
     
    
    
    
    
}
void genPerm(long long int pos)
{
    if(found)
        return;
    if(pos>=5)
    {
        /*cout<<"Permutations "<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<perm[i]<<" ";
        }
        cout<<endl;*/
        reset();
        solve(0,0,0);
    }
    for(int i=0;i<5;i++)
    {
        if(!permVisited[i])
        {
            permVisited[i] = true;
            perm[pos] = num[i];
            genPerm(pos+1);
            permVisited[i] = false;
            
        }
    }
    
}


int main() 
{
    long long int i,j,k,l,x,y,z,tc;
    while(cin>>num[0])
    {
        long long int zero = 0;
        if(num[0]==0)
            zero++;
        for(x=1;x<=4;x++)
        {
            cin>>num[x];
            if(num[x]==0)
                zero++;
        }
        if(zero==5)
            break;
        resetPerm();
        genPerm(0);
        if(found)
            printf("Possible\n");
        else printf("Impossible\n");
        // cout<<"Result "<<found<<endl;
        
        
    }
    
	return 0;
}
