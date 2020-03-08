#include<stdio.h>
#include<math.h>
int main()
{
    long double y;
    int i,n;
    while(scanf("%d\n",&n)==1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%Lf",&y);
            printf("%.0Lf\n",sqrt(y));
        }

    }
    return 0;
}
