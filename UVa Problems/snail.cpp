#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    double h,d,n,f_f,c_d,i_h,d_c,h_c,h_s,u,j,k,l;
    double f_p,m;
    while(cin>>h>>d>>n>>f_f)
    {
        if(h==0)
            break;
        f_p = f_f/100;
        m = d*f_p;
        c_d = 0;
        i_h = 0;
        d_c = 0;
        h_c = 0;
        h_s = 0;
        while(1)
       {
            i_h = h_s;
            d_c = d;

            h_c = i_h + d_c;
            h_s = h_c - n;
            d = d-m;
            if(d<0)
                d=0;
            c_d++;
            if(h_s<0)
            {
                cout<<"failure on day "<<c_d<<endl;
                break;
            }
            else if(h_s==0)
            {
                cout<<"failure on day "<<c_d+1<<endl;
                break;
            }
            else if (h_c>h)
            {
                cout<<"success on day "<<c_d<<endl;
                break;
            }
        }
    }
    return 0;
}
