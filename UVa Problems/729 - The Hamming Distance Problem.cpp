#include<bits/stdc++.h>
using namespace std;
#define SIZE 18
#define NON_VISITED -1
#define VISITED 1
int target,output[SIZE],hammingDistance;
bool visited[SIZE];
std::vector<string> outputs ;
void reset()
{
    for(int i=0;i<SIZE;i++)
        visited[i] = false;
}
void solve(int pos)
{
    if(pos==target)
    {
        // cout<<"Solution "<<endl;
        int diff = 0;
        for(int i=0;i<target;i++)
        {
            if(output[i])
                diff++;
        }
        if(diff==hammingDistance)
        {
            for(int i=0;i<target;i++)
            {
                cout<<output[i];
            }
            cout<<endl;
        }
        return;
    }
    for(int i=0;i<2;i++)
    {
        if(!visited[pos])
        {
            visited[pos] = true;
            output[pos] = i;
            solve(pos+1);
            visited[pos] = false;
        }
    }
    
}

int main()
{
	int i,j,k,l,m,tc,z,x,y,w,a,b;
	while(cin >> tc)
	{
	    for(x=1;x<=tc;x++)
	    {
	        cin>>target>>hammingDistance;
	        reset();
	        solve(0);
	        if(x!=tc)
	            cout<<endl;
	        
	    }
	    
	}

	return 0;
}