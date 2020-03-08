#include<bits/stdc++.h>
using namespace std;
int target,n,ans,num[1000];
string output;
bool visited[1000] = {false};
void solve(int pos,int sum)
{
    if(sum>target || pos>=n)
    {
        if(sum>target)
        {
            // cout<<"sum greater then"<<sum<<" for pos "<<pos-1<<endl;
            sum-=num[pos-1];
            // cout<<"sum greater now"<<sum<<" for pos "<<pos-1<<endl;
            visited[pos-1] = false;
        }
        if(sum>ans)
        {
            ans = sum;
            output = "";
            for(int i=0;i<n;i++)
            {
                if(visited[i])
                {
                    // cout<<" building with "<<num[i]<<endl;
                    output += to_string(num[i]);
                    output += " ";
                }
            }
            // cout<<"sum greater then ans"<<ans<<" for out "<<output<<endl;
        }
        return;
    }
    for(int j=pos;j<n;j++)
    {
        if(!visited[j])
        {
            sum+=num[j];
            visited[j] = true;
            // cout<<"sum "<<sum<<" for pos "<<j<<endl;
            solve(j+1,sum);
            visited[j] = false;
            sum-=num[j];
            // cout<<"falsing at position "<<j<<" sum "<<sum<<endl;
        }
    }
}

int main()
{
	int i,j,k,l,m,tc,z,x,y,w;
	while(cin >> target >> n)
	{
	    for(i=0;i<n;i++)
	    {
	       cin>>num[i]; 
	    }
	    memset(visited,false,sizeof(visited));
	    ans = 0;
	    solve(0,0);
	    cout<<output<<"sum:"<<ans<<endl;
	    
	}

	return 0;
}