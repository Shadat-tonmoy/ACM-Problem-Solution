#include<iostream>
using namespace std;
double minimum(double a,double b)
{
    if(a<b)
        return a;
    else return b;

}
int main()
{
    double s,b,min_bs,div_sb,min_bs_dc,div_sb_dc,i=0;
    while(cin>>b>>s && (b!=0 && s!=0))
    {
        i++;
        div_sb = s/b;
        min_bs = minimum(div_sb,1.0);
        if(b-1==0)
            cout<<"Case "<<i<<": "<<":-\\"<<endl;
        else
            {
                div_sb_dc = (s-1)/(b-1);
                min_bs_dc = minimum(div_sb_dc,1.0);
                if(min_bs==min_bs_dc)
                    cout<<"Case "<<i<<": "<<":-|"<<endl;
                else if(min_bs_dc<min_bs)
                    cout<<"Case "<<i<<": "<<":-("<<endl;
                else cout<<"Case "<<i<<": "<<":-)"<<endl;
            }
    }
    return 0;
}

