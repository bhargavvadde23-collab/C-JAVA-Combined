//linear search

// #include<stdio.h>
// void main()
// {
//     int a[]={11,22,33,44,55,66};
//     int n=6,key,c=0,i;
//     printf("enter the element to search: ");
//     scanf("%d",&key);
//     for(i=0;i<n;i++)
//     {
//         if(a[i]==key)
//         {
//             c++;
//             break;
//         }
//     }
//     if(c==1)
//     {
//         printf("key is found at %d place",i);
//     }
//     else
//     {
//         printf("key is not found");
//     }
// }








#include<stdio.h>
void main()
{
    int a[]={11,22,33,44,55,66,77};
    int i,key,c=0,mid,n=6;
    mid=(0+n)/2;
    printf("enter the element to search: ");
    scanf("%d",&key);
    if(a[mid]==key)
    {
        printf("key is found");
    }
    for (i=0;i<mid;i++)
    {
        if(a[i]==key)
        {
            c++;
            break;
        }
    }
    for (i=mid;i<n;i++;)
    {
        if(a[i]==key)
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        printf("key is found at %d place",i);
    }
    else
    {
        printf("key is not found");
    }
}
















