#include<stdio.h>
#include<math.h>
int max(int,int);
void marshall(int p[20][20],int n)
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
int max(int a,int b)
{
    if(a>b)
        return (a);
    else
        return (b);
}
void main()
{
    int p[20][20]={0},n,e,u,v,i,j;
    printf("enter the no.of vertices:\n");
    scanf("%d",&n);
    printf("enter the no.of edges:\n");
    scanf("%d",&e);
    for(i=1;i<=e;i++)
    {
        printf("enter the edges of end vertice %d: ",i);
        scanf("%d%d",&u,&v);
        p[u][v]=1;
    }
    printf("\n input data:\n");
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            printf("%d\t",p[i][j]);
        }
        printf("\n");
    }
    marshall(p,n);
    printf("\n transtive closure of the input matrix is:\n");
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            printf("%d\t",p[i][j]);
        }
        printf("\n");
    }
}
