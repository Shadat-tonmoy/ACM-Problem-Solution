#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,i,j,total_drinks,total_slice,available_drinks,available_salts,available_slice,ans;

    while(cin>>n>>k>>l>>c>>d>>p>>nl>>np)
    {
        total_drinks = k * l;
        total_slice = c * d;
        available_drinks = total_drinks/nl;
        available_salts = p / np;
        available_slice = total_slice;
        ans = min(available_drinks,min(available_salts,available_slice)) / n;
        cout<<ans<<endl;


    }




    return 0;

}



