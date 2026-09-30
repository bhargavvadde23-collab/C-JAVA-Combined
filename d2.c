#include<stdio.h>
int partition(int a[],int low,int high)
{
    int pivot_item=a[low];
    int left=low,right=high;
    while(left<right)
    {
        while(a[left] <=pivot_item)
            left++;
        while(a[right] > pivot_item)
            right--;
        while(left<right)
        {
            int temp;
            temp=a[left];
            a[left]=a[right];
            a[right]=temp;
        }
    }
    a[left]=a[right];
    a[right]=pivot_item;
    return right;
}
void quicksort(int a[],int low,int high)
{
    int pivot;
    if(high>low)
    {
        pivot=partition(a,low,high);
        quicksort(a,low,pivot-1);
        quicksort(a,pivot+1,high);
    }
}
void main()
{
    int a[]={5,3,6,7,4,8,2,1};
    int low=0;
    int n=5;
    int high=n-1;
    int i;
    quicksort(a,low,high);
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}








