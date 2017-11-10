#include<bits/stdc++.h>
using namespace std;
int x[4]= {1,-1,0,0};
int y[4]= {0,0,1,-1};
double len[4];
struct point
{
    double x,y,tmpx,tmpy;

};
point arr[5];
double cal(double x1,double y1,double x2,double y2)
{
    double dis;
    dis = pow((x1-x2),2)+pow((y1-y2),2);
    return dis;
}
bool isRight()
{
    sort(len,len+3);
    if((len[0]>0 && len[1]>0 )&& (len[0]+len[1]==len[2]))
        return true;
    else return false;

}
void saveLen()
{
    int i,j,k,c=0;
    double dis;
    for(i=0; i<2; i++)
    {
        for(j=i+1; j<3; j++)
        {
            dis = cal(arr[i].x,arr[i].y,arr[j].x,arr[j].y);
            len[c]=dis;
            c++;
        }
    }
}
void reset()
{
    for(int i=0; i<4; i++)
    {
        arr[i].x=arr[i].tmpx;
        arr[i].y=arr[i].tmpy;
    }
}
int main()
{
    int i,j,k,l,m,n;
    double dis,a,b;
    bool right;
    while(cin>>arr[0].x>>arr[0].y)
    {
        arr[0].tmpx=arr[0].x;
        arr[0].tmpy=arr[0].y;
        for(i=1; i<=2; i++)
        {
            cin>>arr[i].x>>arr[i].y;
            arr[i].tmpx=arr[i].x;
            arr[i].tmpy=arr[i].y;
        }

        saveLen();
        if(isRight())
        {
            cout<<"RIGHT"<<endl;
        }
        else
        {
            right=false;
            for(i=0; i<3; i++)
            {
                for(j=0; j<4; j++)
                {
                    arr[i].x+=x[j];
                    arr[i].y+=y[j];
                    saveLen();
                    if(isRight())
                    {
                        right=true;
                        break;
                    }
                    reset();
                }
                if(right)
                    break;
            }
            if(right)
                cout<<"ALMOST"<<endl;
            else cout<<"NEITHER"<<endl;
        }


    }


    return 0;

}


