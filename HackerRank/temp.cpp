#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int totnum(int X,int N,int num)
{
    printf("x %d n %d num %d\n",X,N,num);
    if(pow(num,N)<X)
    {
        printf("Less now calling...");
        return totnum(X,N,num+1)+totnum(X-pow(num,N),N,num+1);
    }
    else if(pow(num,N)==X)
    {
        printf("Equal now calling...");
        return 1;
    }
    else
    {
        printf("Else now calling...");
        return 0;
    }
}

int main()
{
    int X,N;
    cin>>X>>N;
    cout<<totnum(X,N,1);
    return 0;
}
