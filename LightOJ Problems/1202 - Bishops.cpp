#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,tc,dis;
    double sx,sy,dx,dy,x,y,s,d;
    vector <double> ansx;
    vector <double> ansy;
    bool ok = false;
    while(scanf("%lld",&tc)==1)
    {
        for(l=1; l<=tc; l++)
        {
            ok = false;
            scanf("%lf %lf %lf %lf",&sx,&sy,&dx,&dy);
            if(abs(sx-dx) == abs(sy-dy))
            {
                ok = true;
                dis =1;
            }
            else
            {
                s = sx-sy;
                d = dx+dy;
                x = (s+d)/2;
                y = (d+s)/2;
                ansx.push_back(x);
                ansy.push_back(y);

                s = sx+sy;
                d = dx-dy;
                x = (s+d)/2;
                y = (s+d)/2;
                ansx.push_back(x);
                ansy.push_back(y);

                s = sx+sy;
                d = dx+dy;
                x = -(s+d)/2;
                y = -(d+s)/2;
                ansx.push_back(x);
                ansy.push_back(y);

                for(i=0; i<ansx.size(); i++)
                {
                    if(ansx[i]!=(int)ansx[i] || ansy[i]!=(int)ansy[i])
                    {
                        ok = false;
                    }
                    else if (ansx[i]==(int)ansx[i] && ansy[i]==(int)ansy[i])
                    {
                        /*int a,b,c,d;
                        a = abs(ansx[i]-sx);
                        b = abs(ansy[i]-sy);
                        c = abs(ansx[i]-dx);
                        d = abs(ansy[i]-dy);
                        cout<<a<<" "<<b<<" ";
                        cout<<c<<" "<<d<<endl;*/
                        if(ansx[i]==ansy[i])
                        {
                            ok = true;
                            dis = 2;
                            break;
                            //cout<<"bal"<<endl;
                        }
                    }
                    //cout<<ansx[i]<<" "<<ansy[i]<<endl;
                }

            }
            if(!ok)
                printf("Case %lld: impossible\n",l);
            else if(ok && dis==1)
                printf("Case %lld: %lld\n",l,dis);
            else if (ok && dis==2)
                printf("Case %lld: %lld\n",l,dis);
            ansx.clear();
            ansy.clear();


        }
    }



    return 0;
}
