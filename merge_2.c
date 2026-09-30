#include<stdio.h>
void merge(int a[],int beg,int mid,int end)
{
    int n1=mid-beg+1;
    int n2=end-mid;
    int i,j,k;
    int leftarr[n1],rightarr[n2];
    for(i=0;i<n1;i++)
        leftarr[i]=a[beg+i];

    for(j=0;j<n2;j++)
        rightarr[j]=a[mid+1+j];

    i=0;
    j=0;
    k=beg;

    while(i<n1 && j<n2)
    {
        if(leftarr[i]<=rightarr[j])
        {
            a[k]=leftarr[i];
            i++;
        }
        else
        {
            a[k]=rightarr[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=leftarr[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=rightarr[j];
        j++;
        k++;
    }

}
void mergesort(int a[],int beg,int end)
{
    int mid;
    if(beg<end)
    {
        mid=(end+beg)/2;
        mergesort(a,beg,mid);
        mergesort(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void main()
{
    int a[]={234,45,654,123,54};
    int n=sizeof(a)/sizeof(a[0]);
    int beg=a[0];
    int end=a[n-1];
    mergesort(a,0,n-1);
    print(a,n);
}