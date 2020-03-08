#include <bits/stdc++.h>
using namespace std;
#define MAX 150
#define inf -999999
#define lli long long int
class Block{
    public : lli x,y,z;
    public : Block(lli x, lli y, lli z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
};
std::vector<Block> blocks;
void buildBlocks(lli x,lli y, lli z)
{
    blocks.push_back(Block(x,y,z));
    blocks.push_back(Block(x,z,y));
    blocks.push_back(Block(y,x,z));
    blocks.push_back(Block(y,z,x));
    blocks.push_back(Block(z,x,y));
    blocks.push_back(Block(z,y,x));
}

bool isStackableBlock(Block b1, Block b2)
{
    // cout<<"Block1 "<<b1.x<<" "<<b1.y<<" "<<b1.z<<endl;
    // cout<<"Block2 "<<b2.x<<" "<<b2.y<<" "<<b2.z<<endl;
    return b2.x > b1.x && b2.y > b1.y;
}
bool compareBlock(Block b1, Block b2)
{
    if(b1.x < b2.x)
        return true;
    else if(b1.x == b2.x && b1.y<b2.y)
        return true;
    else return false;
}
int main() 
{
	lli i,j,k,l,m,a,b,c,d,e,f,g,tc,x,y,z,n,score,maxScore,len[10000];
	tc=1;
	while(cin>>n)
	{
	    blocks.clear();
	    if(n==0)
	        break;
	    for(i=0;i<n;i++)
	    {
	        cin>>x>>y>>z;
	        buildBlocks(x,y,z);
	    }
	    sort(blocks.begin(),blocks.end(),compareBlock);
	    /*for(lli i=0;i<blocks.size();i++)
        {
            cout<<"Block "<<blocks[i].x<<" "<<blocks[i].y<<" "<<blocks[i].z<<endl;
        }*/
	    for(i=0;i<=(6*n);i++)
	        len[i]=blocks[i].z;
	    
	    /*for(i=0;i<(6*n);i++)
	        cout<<len[i]<<" ";
	    cout<<endl;*/
	    maxScore = inf;
	    for(i=0;i<6*n;i++)
	    {
	        Block blockI = blocks[i];
	        for(j=0;j<i;j++)
	        {
	            Block blockJ = blocks[j];
	            if(isStackableBlock(blockJ, blockI))
	            {
	               // cout<<"Stackable "<<i<<" "<<j<<endl;
	                len[i] = max(len[i], len[j] + blockI.z);
	                maxScore = max(maxScore, len[i]);
	            }     
	        }
	    }
	   // cout<<maxScore<<endl;
	    printf("Case %lld: maximum height = %lld\n",tc,maxScore);
	    tc++;
	    
	    
	    
	    
	}
	return 0;
}
/*

4
4 2 3 1
1 3 2 4
3 2 1 4
2 3 4 1
10
3 1 2 4 9 5 10 6 8 7
1 2 3 4 5 6 7 8 9 10
4 7 2 3 10 6 9 1 5 8
3 1 2 4 9 5 10 6 8 7
2 10 1 3 8 4 9 5 7 6
*/