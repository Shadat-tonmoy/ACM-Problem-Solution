#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<bitset>
#include<list>
#include<iomanip>
#include<string>
#include<climits>
#include <sstream>
#include <fstream>
#include<cctype>
#include<time.h>
#include<assert.h>
#include <numeric>
#include <functional>
#include<cstring>
#include<cmath>
#include<iterator>
#include <memory.h>
#include<utility>
#include <ctime>
#include<algorithm>

#define all(v) v.begin(),v.end()
#define read(a) freopen("a.txt","r",stdin)
#define write(b) freopen("b.txt","w",stdout)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define pbpush_back
#define mkmake_pair
#define SORT(v) sort(all(v))
#define UN(v) SORT(v), (v).earse(unique(all(v)),v.end())
#define common(a,b) SORT(a), SORT(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) SORT(a), SORT(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())
#define FILL(a,d) memset(a,d,sizeof(a))
#define LL long long
#define PI 2*acos(0.0)
#define pipair<int,int>
using namespace std;
const int inf=10000000;

int main()
{
    LL a,b;
    while(cin>>a>>b)
    {
        if(b==0) cout<<1<<endl;
        else
        {
            LL ans=1;
            LL c=a-b+1;
            for(LL i=a;i>=c;i--)
            {
                ans*=i;
                while(ans%10==0)
                    ans/=10;

                ans%=1000000000;

            }
            cout<<ans%10<<endl;
        }
    }
    return 0;
}
