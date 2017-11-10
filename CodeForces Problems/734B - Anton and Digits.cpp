#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,numOf2,numOf3,numOf5,numOf6;
    while(scanf("%I64d %I64d %I64d %I64d",&numOf2,&numOf3,&numOf5,&numOf6)==4){
        long long int min256 = min(numOf2,min(numOf5,numOf6));
        long long int remain2 = numOf2 - min256;
        long long int min32 = min(numOf3,remain2);
        long long int ans = (256*min256) + (32*min32);
        printf("%I64d\n",ans);


    }







    return 0;

}


