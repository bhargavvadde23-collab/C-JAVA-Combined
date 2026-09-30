//queues using linked list

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *front=0,*rear=0,*new;
// void enqueue();
// void dequeue();
// void peek();
// void display();
// void main()
// {
//     int ch,op=1;
//     while(op)
//     {
//         printf("push-1:\npop-2:\npeek-3:\ndisplay-4:\n");
//         scanf("%d",&ch);
//         switch(ch)
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
//                 printf("no such case ");
//         }
//         printf("do u want to continue(0,1): ");
//         scanf("%d",&op);
//     }
// }
// void enqueue()
// {
//     new=(struct node*)malloc(sizeof(struct node));
//     printf("enter the data: ");
//     scanf("%d",&new->data);
//     new->next=0;
//     if(front==0 && rear==0)
//     {
//         front=new;
//         rear=new;
//     }
//     else
//     {
//         rear->next=new;
//         rear=new;
//     }
// }

// void dequeue()
// {
//     struct node *temp;
//     if(front==0 && rear==0)
//     {
//         printf("no nodes present");
//     }
//     else
//     {
//         temp=front;
//         front=front->next;
//         free(temp);
//         temp=0;
//     }
// }

// void peek()
// {
//     if(front==0 && rear==0)
//     {
//         printf("no nodes are present");
//     }
//     else
//     {
//         printf("%d ",front->data);
//     }
// }

// void display()
// {
//     struct node *temp;
//     if (front==0 && rear==0)
//     {
//         printf("no nodes are present");
//     }
//     else
//     {
//         temp=front;
//         while(temp!=0)
//         {
//             printf("%d ",temp->data);
//             temp=temp->next;
//         }
//     }
// }




//queues using arrays


// #include<stdio.h>
// void enqueue();
// void dequeue();
// void peek();
// void display();
// #define n 5
// int front=-1;
// int rear=-1;
// int queue[n];
// void main()
// {
//     int ch,op=1;
//     while(op)
//     {
//         printf("1-enqueue\n2-dequeue\n3-peek\n4-display");
//         scanf("%d",&ch);
//         switch(ch)
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
//         printf("do you want to continue (0,1):");
//         scanf("%d",&op);
//     }
// }
// void enqueue()
// {
//     int x;
//     printf("enter the value:");
//     scanf("%d",&x);
//     if(front==-1 && rear==-1)
//     {
//         front=0;
//         rear=0;
//         queue[rear]=x;
//     }
//     else if(rear==n-1)
//     {
//         printf("queue is full");
//     }
//     else
//     {
//         rear++;
//         queue[rear]=x;
//     }
// }
// void dequeue()
// {
//     if (front==-1 && rear==-1)
//     {
//         printf("queue is empty");
//     }
//     else if(front==rear)
//     {
//         front=rear=-1;
//     }
//     else
//     {
//         printf("%d ",queue[front]);
//         front++;
//     }
// }
// void peek()
// {
//     printf("%d ",queue[front]);
// }
// void display()
// {
//     int i=front;
//     for (i;i<=rear;i++)
//     {
//         printf("%d ",queue[i]);
//     }
// }














