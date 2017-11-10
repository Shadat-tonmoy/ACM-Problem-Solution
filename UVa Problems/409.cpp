#include <cstdio>
using namespace std;

int K,E;
char keyword[20][100],line[20][1000];

int analysis (int x)
{
    int num = 0, p = 0;
    char word[100];
    while (1){
        while (line[x][p]<'A' || line[x][p]>'Z' && line[x][p]<'a' || line[x][p]>'z') {
            if (line[x][p] == '\0') break;
            p++;
        }
        if (line[x][p] == '\0') break;
        int i;
        for (i=0; line[x][p]>='A'&&line[x][p]<='Z'||line[x][p]>='a'&&line[x][p]<='z'; i++)
            word[i] = line[x][p++];
        word[i] = '\0';

        for (int i=0; i<K; i++){
            int j=0,k=0;
            for (; word[j] && keyword[i][k]; j++){
                if (word[j]==keyword[i][k] || word[j]==keyword[i][k]-32) k++;
            }
            if (keyword[i][k]=='\0' && word[j]=='\0') num++;
        }
    }
    return num;
}

int main()
{
    //freopen ("input.txt","rt",stdin);
    int Case = 1;
    while (scanf("%d%d",&K,&E)!=EOF)
    {
        for (int i=0; i<K; i++) scanf("%s",keyword[i]);
        getchar();
        int num[20],Max = 0;
        for (int i=0; i<E; i++){
            gets(line[i]);
            num[i] = analysis(i);
            if (num[i] > Max) Max = num[i];
        }
        printf("Excuse Set #%d\n",Case++);
        for (int i=0; i<E; i++)
            if (num[i] == Max)
                puts(line[i]);
        printf("\n");
    }
    return 0;
}
