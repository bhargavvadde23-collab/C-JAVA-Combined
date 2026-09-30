//selection sort

// #include<stdio.h>
// void main()
// {
//     int a[10]={4,5,3,65,76,8};
//     int i,pos,j;
//     for (i=0;i<6-1;i++)
//     {
//         pos=i;
//         for (j=i+1;j<6;j++)
//         {
//             if(a[pos]>a[j])
//             {
//                 pos=j;
//             }
//         }
//         if(i!=pos)
//         {
//             int temp;
//             temp=a[i];
//             a[i]=a[pos];
//             a[pos]=temp;
//         }
//     }
//     for (i=0;i<6;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }






//insertion sort

// #include<stdio.h>
// void main()
// {
//     int a[]={43,54,2,3,1,34,67,9,0};
//     int i,j,temp,n=9;
//     for (i=0;i<n-1;i++)
//     {
//         if(a[i]>a[i+1])
//         {
//             temp=a[i];
//             a[i]=a[i+1];
//             a[i+1]=temp;
//         }
//         j=i;
//         while(j>0)
//         {
//             if(a[j]<a[j-1])
//             {
//                 temp=a[j];
//                 a[j]=a[j-1];
//                 a[j-1]=temp;
//                 j--;
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }





//merge sort

// #include<stdio.h>
// #include<stdlib.h>
// void mergesort(int a[],int lb,int mid,int ub)
// {
//     int i,j,k,size;
//     i=lb;
//     j=mid+1;
//     k=lb;
//     size=ub+lb;
//     int b[size];
//     while(i<=mid && j<=ub)
//     {
//         if(a[i]>a[j])
//         {
//             b[k]=a[j];
//             j++;
//             k++;
//         }
//         else
//         {
//             b[k]=a[i];
//             k++;
//             i++;
//         }
//     }
//     if(i>mid)
//     {
//         while(j<=ub)
//         {
//             b[k]=a[j];
//             j++;
//             k++;
//         }
//     }
//     else
//     {
//         while(i<=mid)
//         {
//             b[k]=a[i];
//             k++;
//             i++;
//         }
//     }
//     for (i=lb;i<=ub;i++)
//     {
//         a[i]=b[i];
//     }
// }
// void merge(int a[],int lb,int ub)
// {
//     int mid;
//     if(lb<ub)
//     {
//         mid=(lb+ub)/2;
//         merge(a,lb,mid);
//         merge(a,mid+1,ub);
//         mergesort(a,lb,mid,ub);
//     }
// }
// void main()
// {
//     int a[]={4,3,1,2,45,65};
//     int temp[15];
//     int i;
//     merge(a,0,5);
//     for(i=0;i<6;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }














