#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,tc,sz,num,cnt;
    string cmd;
    vector <int> data;
    scanf("%d",&tc);
    for(l=1; l<=tc; l++)
    {
        scanf("%d %d",&sz,&n);
        cnt=0;
        printf("Case %d:\n",l);
        for(k=1; k<=n; k++)
        {
            cin>>cmd;
            if(cmd=="pushLeft")
            {
                scanf("%d",&num);
                if(cnt<sz)
                {
                    data.insert(data.begin()+0,num);
                    cnt++;
                    printf("Pushed in left: %d\n",num);
                    /*for(i=0; i<data.size(); i++)
                        cout<<data[i]<<" ";
                    cout<<endl;*/

                }
                else printf("The queue is full\n");

            }
            else if(cmd=="pushRight")
            {
                scanf("%d",&num);
                if(cnt<sz)
                {
                    data.push_back(num);
                    cnt++;
                    printf("Pushed in right: %d\n",num);
                    /*for(i=0; i<data.size(); i++)
                        cout<<data[i]<<" ";
                    cout<<endl;*/
                }
                else printf("The queue is full\n");
            }
            else if(cmd=="popLeft")
            {
                if(cnt>0)
                {
                    printf("Popped from left: %d\n",data[0]);
                    cnt--;
                    data.erase(data.begin());
                }
                else printf("The queue is empty\n");
            }
            else if(cmd=="popRight")
            {
                if(cnt>0)
                {
                    printf("Popped from right: %d\n",data[data.size()-1]);
                    cnt--;
                    data.pop_back();
                }
                else printf("The queue is empty\n");
            }

        }
        data.clear();
    }


    return 0;
}
