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





//circular queues using linkedlist

// #include<stdio.h>
// #include<stdlib.h>
// struct node *front=0,*rear=0,*new;
// struct node
// {
//     int data;
//     struct node *next;
// };
// void enqueue()
// {
//     new=(struct node*)malloc(sizeof(struct node));
//     printf("enter the data:");
//     scanf("%d",&new->data);
//     new->next=0;
//     if(front==0 || rear==0)
//     {
//         front=rear=new;
//         front->next=new;
//     }
//     else
//     {
//         rear->next=new;
//         rear=new;
//         rear->next=front;
//     }
// }
// void dequeue()
// {
//     struct node *temp;
//     if(front==0 || rear==0)
//     {
//         printf("queue is empty");
//     }
//     else if(front==new)
//     {
//         front=rear=0;
//     }
//     else
//     {
//         temp=front;
//         front=front->next;
//         rear->next=front;
//         free(temp);
//         temp=0;
//     }
// }
// void peek()
// {
//     printf("peek element is %d",front->data);
// }
// void display()
// {
//     struct node *temp;
//     temp=front;
//     do
//     {
//         printf("%d ",temp->data);
//         temp=temp->next;
//     } while (temp->next!=front);
    
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
//             default:
//                 printf("there is no such case");
//         }
//         printf("do you want to continue(0,1):");
//         scanf("%d",&ch);
//     }
// }















