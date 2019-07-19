#include<bits/stdc++.h>
using namespace std;
#define SIZE 101
#define NON_VISITED -1
#define MAX_DIGIT 10
int target,totalWord,totalPattern;
bool visited[SIZE];
string output[SIZE],pattern,words[SIZE],patterns[SIZE];
void reset()
{
    for(int i=0;i<SIZE;i++)
        visited[i] = false;
}
void solve(int pos)
{
    if(pos == target)
    {
        for(int i=0;i<target;i++)
            cout<<output[i];
        cout<<endl;
        return;
    }
    if(pattern[pos]=='0')
    {
        for(int i=0;i<MAX_DIGIT;i++)
        {
            if(!visited[pos])
            {
                visited[pos] = true;
                output[pos] = to_string(i);
                solve(pos+1);
                visited[pos] = false;
            }
        }
    }
    
    else if(pattern[pos]=='#')
    {
        for(int i=0;i<totalWord;i++)
        {
            if(!visited[pos])
            {
                visited[pos] = true;
                output[pos] = words[i];
                solve(pos+1);
                visited[pos] = false;
            }
        }
    }
    
    
}

int main()
{
	int i,j,k,l,m,tc,z,x,y,w,a,b;
	while(cin >> totalWord)
	{
	    for(x=0;x<totalWord;x++)
	    {
	        cin>>words[x];
	    }
	    cin>>totalPattern;
	    for(x=0;x<totalPattern;x++)
	    {
	        cin>>patterns[x];
	    }
	    printf("--\n");
	    for(x=0;x<totalPattern;x++)
	    {
	        pattern = patterns[x];
    	    target = pattern.size();
    	    reset();
    	    solve(0);
	    }
	    
	    
	    
	}

	return 0;
}