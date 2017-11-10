#include<iostream>
#include<algorithm>
int age[2000005];
using namespace std;
int main()
{
    int n,j,k,l,m;
    while(cin>>n && n>0)
    {
        for(int i=0;i<n;i++)
            cin>>age[i];
        sort(age,age+n);
        for(int i=0;i<n;i++)
        {
            if(i==0)
                cout<<age[i];
            else cout<<" "<<age[i];
        }
        cout<<endl;
    }
    return 0;
}
