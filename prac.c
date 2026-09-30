//insertion sort

// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     int a[]={31,22,3,1,2,45,66};
//     int i,j,n=7,temp;
//     for(i=0;i<n-1;i++)
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
//     for (i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }





//selection sort

// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     int a[10]={22,3,44,1,5,3};
//     int i,j,pos;
//     for(i=0;i<6-1;i++)
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








// #include<stdio.h>
// #include<stdlib.h>
// void merge_sort(int a[],int lb,int mid,int ub)
// {
//     int i,j,k,size;
//     i=lb;
//     j=mid+1;
//     k=lb;
//     size=lb+ub;
//     int b[size];
//     while(i<=lb && j<=ub)
//     {
//         if(a[i]>a[j])
//         {
//             b[k]=a[j];
//             k++;
//             j++;
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
//         while(j<ub)
//         {
//             b[k]=a[j];
//             k++;
//             j++;
//         }
//     }
//     else
//     {
//         if(i<=mid)
//         {
//             b[k]=a[i];
//             i++;
//             k++;
//         }
//     }
//     for(i=lb;i<=ub;i++)
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
//         merge(a,lb,ub);
//         merge(a,mid+1,ub);
//         merge_sort(a,lb,mid,ub);
//     }
// }
// void main()
// {
//     int a[]={11,2,33,4,55,6};
//     int i;
//     merge(a,0,5);
//     for(i=0;i<6;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }




//circular queues suing arrays

// #include<stdio.h>
// #include<stdlib.h>
// #define n 5
// int queue[n];
// int front=-1;
// int rear=-1;
// void enqueue()
// {
//     int x;
//     printf("enter the value: ");
//     scanf("%d",&x);
//     if(front==-1 && rear==-1)
//     {
//         front=0;
//         rear=0;
//         queue[rear]=x;
//     }
//     else if(front==(rear+1)%n)
//     {
//         printf("queue is full");
//     }
//     else
//     {
//         rear=(rear+1)%n;
//         queue[rear]=x;
//     }
// }
// void dequeue()
// {
//     if(front==-1 && rear==-1)
//     {
//         printf("queue is empty");
//     }
//     else if(front==rear)
//     {
//         front=rear=-1;
//     }
//     else
//     {
//         printf("%d element is dequeued",queue[front]);
//         front=(front+1)%n;
//     }
// }
// void peek()
// {
//     if(front==-1 && rear==-1)
//     {
//         printf("queue is empty");
//     }
//     printf("peek element is %d",queue[front]);
// }
// void display()
// {
//     if(front==-1 && rear==-1)
//     {
//         printf("queue is empty");
//     }
//     else
//     {
//       int i=front;
//       while(i!=rear)
//       {
//         printf("%d ",queue[i]);
//         i=(i+1)%n;
//       }
//       printf("%d ",queue[rear]);
//     }
// }
// void main()
// {
//     int ch=1,choice;
//     while(ch)
//     {
//         printf("1-enqueue\n2-dequeue\n3-peek\n4-display");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case 1:
//                 enqueue();
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 peek();
//                 break;
//             case 4:
//                 display();
//                 break;
//             default :
//                 printf("there is no such case");
//         }
//         printf("do you want to continue(0,1):");
//         scanf("%d",&ch);
//     }
// }

