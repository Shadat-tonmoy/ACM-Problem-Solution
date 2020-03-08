#include <bits/stdc++.h>
using namespace std;
#define MAX 150
#define inf -999999
#define lli long long int
bool isNumSeq(string input)
{
    return input.size() <= 2;
}
int main() 
{
	lli i,j,k,l,m,a,b,c,d,e,f,g,tc,x,y,z,n,origin[10000],student[10000],score,maxScore,len[10000];
	map<lli,lli> originRank, studentRank;
	bool isFirstLine = true;
	string input;
	std::vector<lli> students;
	while(getline(cin, input))
	{
	   lli totalNum;
	    if(isNumSeq(input))
	    {
	        n=0;
	        for(i=0;i<input.size();i++)
	        {
	            n*=10;
	            n+= (input[i]-'0');
	        }
	        totalNum = n;
	        for(i=1;i<=n;i++)
	        {
	            cin>>origin[i];
	            originRank[i] = origin[i];
	        }
	        getchar();
	    }
	    else
	    {
	        students.clear();
	        n=0;
	        for(i=0;i<input.size();i++)
	        {
	            if(input[i] == ' ')
	            {
	                students.push_back(n);
	                n=0;
	            }
	            else
	            {
	                n*=10;
	                n+= (input[i] - '0');
	            }
	        }
	        if(n!=0)
	            students.push_back(n);
	        lli totalMatch = 0;
	        for(i=0;i<totalNum;i++)
	        {
	            student[i+1] = students[i];
	        }
	        
	        n = students.size();
	        for(i=1;i<=n;i++)
	        {
	            if(student[i] == origin[i])
	                totalMatch++;
	            studentRank[student[i]] = i;
	        }
	        
	        if(totalMatch==students.size())
	            cout<<totalMatch<<endl;
	        else
	        {
	            n = students.size();
    	        students.clear();
    	        for(i=1;i<=n;i++)
    	        {
    	            students.push_back(originRank[studentRank[i]]);
    	        }
    	        for(i=0;i<n;i++)
    	            len[i]=1;
    	        maxScore = -999999;
        	    for(i=0;i<n;i++)
        	    {
        	        for(j=0;j<i;j++)
        	        {
        	            if(students[i] > students[j])
        	            {
        	                len[i] = max(len[i],len[j]+1);
        	                maxScore = max(maxScore, len[i]);
        	            }
        	        }
        	    }
        	    if(maxScore==-999999)
        	        maxScore = 1;
        	    std::cout << maxScore << std::endl;
	        }
	        
	    }
	    
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