//url
#include <bits/stdc++.h>
using namespace std;
struct Point{
	int x;
	int y;
};
double getLength(Point a,Point b)
{
	return sqrt(((a.x-b.x)*(a.x-b.x)) + ((a.y-b.y)*(a.y-b.y)));
}
int main() {
	int i,j,k,l,m,n,tc,x,y,z,X,Y,prev,ans,lower,upper,mid,num[10000];
	Point points[100];
	double distances[10];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			for(i=1;i<=4;i++)
			{
				cin>>X>>Y;
				points[i].x = X;
				points[i].y = Y;
			}
			distances[0] = getLength(points[1],points[2]);
			distances[1] = getLength(points[2],points[3]);
			distances[2] = getLength(points[3],points[4]);
			distances[3] = getLength(points[4],points[1]);
			distances[4] = getLength(points[1],points[3]);
			distances[5] = getLength(points[2],points[4]);
			sort(distances,distances+6);
			bool isSquare = true;
			for(i=0;i<3;i++)
			{
				if(distances[i]==0 || (distances[i] != distances[i+1]))
				{
					isSquare = false;
					break;
				}
			}
			if(isSquare)
				cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
			

	        
	        
	        
	    }
	}
	return 0;
}
