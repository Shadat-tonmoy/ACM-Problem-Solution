#include<bits/stdc++.h>
#define MAX 100000
using namespace std;
int findMSB(long long int n)
{
    int a=1,c=0,msb;
    while(n!=0)
    {
        a = n%2;
        c++;
        if(a==1)
            msb=c-1;
        n=n/2;
    }
    return msb;
}
int main()
{
    long long int i,j,k,l,r,m,n,a,b,c,tc,num[MAX],ans;
    while(cin>>tc)
    {
        for(l=1;l<=tc;l++)
        {
            cin>>n;
            m = findMSB(n);
            //cout<<m<<endl;
            a = pow(2,m);
            //cout<<a<<endl;
            b = n - a + 1;
            ans = a-b;
            cout<<ans<<endl;
        }
    }
}

/*
Approach

01. As 'a^a=0' so we can say if 'a' is presented in the subsets even number of time
    then resulting xor will be 0. If 'n' is even then all the number in the array will be
    presented even number of time in the subsets. So, the result will be 0;

02. If n is Odd all the numbers presented in the even index will be of odd time and all the
    numbers presented in the odd index will be of even time. If a number is presented odd
    number of times resulting xor will not be 0. So we XOR them.

Test case #1: {1,2,3,4}

1^2^3^4^(1^2)^(2^3)^(3^4)^(1^2^3)^(2^3^4)^(1^2^3^4)

Notice that 1 occurs an even number of times, as does 2, 3, and 4. XORing any number an even number of times produces 0 as a result.
When the number of values is odd, the resulting subarrays are as follows:

Test case #2: {1,2,3}
1^2^3^(1^2)^(2^3)^(1^2^3)

Notice that every even index (0, 2) occurs an odd number of times and that every odd index (1) occurs an even number of times. Recall that XORing a number by itself produces 0 for any even number of XOR operations.



*/












