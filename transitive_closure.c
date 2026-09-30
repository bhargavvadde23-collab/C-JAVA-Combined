#include<stdio.h>
#include<conio.h>
#include<math.h>
void marshall(int p[10][10],int n)
{
    int i,j,k;
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                p[i][j]=max(p[i][j],p[i][k]&&p[k][j]);
            }
        }
    }
}
int max(int a.intb)
{
    if(a>b)
        return(a);
        
    else
        return(b);
}
void main()
{
    int p[10][10]={0},n,e,u,v,i,j;
    printf("\enter the no.of.vertices:");
    scanf("%d",&n);
    printf("\enter the ni.of.edges:");
    scanf("%d",&e);
    for(i=1;i<=e;i++)
    {
        printf("\enter the end vertices of edge %d",i);
        scanf("%d%d",&u,&v);
        p[u][v]=1;
    }
    printf("\n matrix of input data:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",p[i][j]);
            printf("\n");
        }
    }
    warshall(p,n);
    printf("\ntransitive closure:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",p[i][j]);
            printf("\n");
        }
    }
    getch();
}