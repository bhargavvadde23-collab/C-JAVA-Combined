//deque using arrays

// #include<stdio.h>
// #include<stdlib.h>
// #define n 5
// int front=-1;
// int rear=-1;
// int queue[n];
// void insert_front()
// {
//     int x;
//     printf("enter the value: ");
//     scanf("%d",&x);
//     if((front==0 && rear==n-1) || front==rear+1)
//     {
//         printf("queue is full");
//     }
//     else if(front==-1 && rear==-1)
//     {
//         front=rear=0;
//         queue[front]=x;
//     }
//     else if(front==0)
//     {
//         front=n-1;
//         queue[front]=x;
//     }
//     else
//     {
//         front--;
//         queue[front]=x;
//     }
// }
// void insert_rear()
// {
//     int x;
//     printf("enter the value: ");
//     scanf("%d",&x);
//     if((front==0 && rear==n-1) || front==rear+1)
//     {
//         printf("queue is full");
//     }
//     else if(front==-1 && rear==-1)
//     {
//         front=rear=0;
//         queue[rear]=x;
//     }
//     else if(rear=n-1)
//     {
//         rear=0;
//         queue[rear]=x;
//     }
//     else
//     {
//         rear++;
//         queue[rear]=x;
//     }
// }

// void delete_front()
// {
//     if(front==-1 && rear==-1)
//     {
//         printf("queue is empty");
//     }
//     else if(front==rear)
//     {
//         printf("%d",queue[front]);
//         front=-1;
//         rear=-1;
//     }
//     else if(front==n-1)
//     {
//         printf("%d",queue[front]);
//         front=0;
//     }
//     else
//     {
//         printf("%d",queue[front]);
//         front++;
//     }
// }
// void delete_rear()
// {
//     if(front==-1 && rear==-1)
//     {
//         printf("queue is empty");
//     }
//     else if(front==rear)
//     {
//         printf("%d",queue[rear]);
//         front=-1;
//         rear=-1;
//     }
//     else if(rear==0)
//     {
//         printf("%d",queue[rear]);
//         rear=n-1;
//     }
//     else
//     {
//         printf("%d",queue[rear]);
//         rear--;
//     }
// }
// void peek()
// {
//     if(front==-1 && rear==-1)
//     {
//         printf("deque is empty");
//     }
//     else
//     {
//         printf("peek element is %d",queue[front]);
//     }
// }
// void display()
// {
//     if(front==-1 &&  rear==-1)
//     {
//         printf("deque is empty");
//     }
//     else
//     {
//         int i=front;
//         while(i!=rear)
//         {
//             printf("%d ",queue[i]);
//             i=(i+1)%n;
//         }
//         printf("%d ",queue[rear]);
//     }
// }
// void main()
// {
//     int choice,ch=1;
//     while(ch)
//     {
//         printf("1-insert_front\n2-insert_rear\n3-delete_front\n4-delete_rear\n5-peek\n6-display");
//         scanf("%d",&choice);

//         switch(choice)
//         {
//             case 1:
//                 insert_front();
//                 break;
//             case 2:
//                 insert_rear();
//                 break;
//             case 3:
//                 delete_front();
//                 break;
//             case 4:
//                 delete_rear();
//                 break;
//             case 5:
//                 peek();
//                 break;
//             case 6:
//                 display();
//                 break;
//             default :
//                 printf("there is no such case");
//         }
//         printf("do you want to continue(0,1): ");
//         scanf("%d",&ch);
//     }
// }