#include<bits/stdc++.h>
using namespace std;
int digits[100],minimumNumber[100];
void buildMinimum(int pos){
    int i,j,k;
    for(i=pos-1,j=0;i>=0;i--,j++)
    {
        if(i==pos-1)
        {
            int n = digits[i];
            int remain = 9-n;
            if(remain>0 && remain<n)
                minimumNumber[j] = remain;
            else minimumNumber[j] = n;
        }
        else
        {
            minimumNumber[j] = min(digits[i],9-digits[i]);
        }
    }
    for(k=0;k<j;k++)
        cout<<minimumNumber[k];
    cout<<endl;
}
void splitNumber(long long int n){
    int i=0;
    while(n!=0){
        digits[i]=n%10;
        n=n/10;
        i++;
    }
    buildMinimum(i);
}

int main()
{
    long long int i,j,k,l,n,a,b,c;
    while(cin>>n)
    {
        splitNumber(n);
    }








    return 0;

}


