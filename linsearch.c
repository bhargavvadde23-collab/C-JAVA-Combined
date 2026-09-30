#include<stdio.h>
int search(int k[],int n,int key);
int main()
{
    int k[50],i,n,item,pos;
    printf("enter how many elements=\n");
    scanf("%d",&n);
    printf("enter the elemnts=\n");
    for(i=0;i<n;i++)
    scanf("%d",&k[i]);
    printf("enter an element to search=");
    scanf("%d",&item);
    pos=search(k,n,item);
    if(pos!=0)
    {
        printf("element found at location=%d\n",pos);
    }
    else
    {
        printf("element was not found");
    }
    return 0;
}
int search(int k[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(k[i]==key)
        return i;
    }
    return -1;
}