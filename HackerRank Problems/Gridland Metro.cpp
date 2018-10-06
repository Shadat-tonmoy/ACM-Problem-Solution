#include<bits/stdc++.h>
using namespace std;
struct track
{
    long long int start,end;
};
bool comp(const track& A, const track& B)
{
    return A.start<B.start;
}
int main()
{
    long long int i,j,k,l,m,n,a,b,c,r,ans,add,pos,mini,tmpA,tmpB;

    while(cin>>n>>m>>k)
    {
        map<int,long long int> trackMap;
        map<long long int,bool> visited;
        map<long long int,vector<track> > tracks;
        c=0;
        for(i=1; i<=k; i++)
        {
            cin>>r>>a>>b;
            track tmp;
            tmp.start = a;
            tmp.end = b;
            tracks[r].push_back(tmp);
            trackMap[i]=r;
        }
        for(i=1; i<=k; i++)
        {
            long long int row = trackMap[i];
            //printf("-------\nRow %lld------\n\n",row);
            if(!visited[row])
            {
                visited[row] = true;
                //printf("Row is %lld size is %lld\n",row,tracks[row].size());
                //cout<<tracks[row].<<endl;
                std::sort(tracks[row].begin(),tracks[row].end(),comp);
                //printf("Printing Values for row %lld\n\n\n",row);

                for(j=0; j<tracks[row].size(); j++)
                {
                    track tmp = tracks[row][j];
                    long long int tA = tmp.start;
                    long long int tB = tmp.end;
                    //printf("Values are %lld %lld\n",tA,tB);
                }

                for(j=0; j<tracks[row].size(); j++)
                {
                    track tmp = tracks[row][j];
                    if(1)
                    {
                        long long int tA = tmp.start;
                        long long int tB = tmp.end;
                        add = tB-tA+1;
                        //printf("Comapring.....%lld %lld\n",tA,tB);
                        for(l=0; l<tracks[row].size(); l++)
                        {
                            if(l!=j)
                            {
                                track cTrack = tracks[row][l];
                                if(1)
                                {
                                    long long int cA = cTrack.start;
                                    long long int cB = cTrack.end;
                                    if(tA>=cA && tB<=cB)
                                    {
                                        //delete that track
                                        //tracks[row][l]=NULL;
                                        tracks[row].erase(tracks[row].begin()+j);
                                        j--;
                                        break;
                                    }
                                    else if(tB==cA || (tB>cA && tB<=cB))
                                    {
                                        //delete tmp track
                                        //printf("tb==ca --> %lld %lld %lld %lld\n",tA,tB,cA,cB);

                                        tracks[row][j].end = tracks[row][l].end;
                                        tB = tracks[row][l].end;
                                        tracks[row].erase(tracks[row].begin()+l);
                                        l--;

                                    }

                                }

                            }
                        }

                    }

                }

                for(j=0; j<tracks[row].size(); j++)
                {
                    track tmp = tracks[row][j];
                    long long int tA = tmp.start;
                    long long int tB = tmp.end;
                    c+=(tB-tA+1);
                    //printf("Values are %lld %lld\n\nC is %lld\n",tA,tB,c);
                }
            }

        }
        //cout<<c<<endl;
        ans = (m*n) - c;
        cout<<ans<<endl;


    }

}
