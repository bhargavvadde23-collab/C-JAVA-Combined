//stacks functions

// #include<stdio.h>
// void push();
// void pop();
// void peak();
// void display();
// #define N 5
// int top=-1;
// int stack[N];
// void main()
// {
//     int choice,ch=1;
//     while(ch)
//     {
//         printf("enter 1-for push,2 for pop,3 for peak,4 for display");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case 1:
//                 push();
//                 break;
//             case 2:
//                 pop();
//                 break;
//             case 3:
//                 peak();
//                 break;
//             case 4:
//                 display();
//                 break;
//         }
//         printf("do you want to continue(0,1):");
//         scanf("%d",&ch);
//     }
// }
// void push()
// {
//     if (top==N-1)
//     {
//         printf("stack is full");
//     }
//     else
//     {
//         top++;
//         int c;
//         printf("enter element to insert:");
//         scanf("%d",&c);
//         stack[top]=c;
//     }
// }
// void pop()
// {
//     if (top==-1)
//     {
//         printf("stack is empty");
//     }
//     else
//     {
//         printf("deleted element is %d\n",stack[top]);
//         top--;
//     }
// }
// void peak()
// {
//     printf("\n%d\n",stack[top]);
// }
// void display()
// {
//     int i;
//     for (i=0;i<=top;i++)
//     {
//         printf("%d\n",stack[i]);
//     }
// }





//stacks using linked list

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *top=0;
// void push();
// void pop();
// void peek();
// void display();
// void main()
// {
//     int ch,op=1;
//     while(op)
//     {
//         printf("enter 1-push,2-for pop,3-for peek,4-for display: ");
//         scanf("%d",&ch);
//         switch(ch)
//         {
//             case 1:
//                 push();
//                 break;
//             case 2:
//                 pop();
//                 break;
//             case 3:
//                 peek();
//                 break;
//             case 4:
//                 display();
//                 break;
//             default :
//                 printf("no such case");
//         }
//         printf(" do u want to continue(0,1):");
//         scanf("%d",&op);
//     }
// }
// void push()
// {
//     struct node *new;
//     new=(struct node*)malloc(sizeof(struct node));
//     printf("enter the stack data: ");
//     scanf("%d",&new->data);
//     new->next=0;
//     if(top==0)
//     {
//         top=new;
//     }
//     else
//     {
//         new->next=top;
//         top=new;
//     }
// }

// void pop()
// {
//     struct node *temp;
//     if (top==0)
//     {
//         printf("no elements are present");
//     }
//     else
//     {
//         temp=top;
//         top=top->next;
//         free(temp);
//         temp=0;
//     }
// }

// void peek()
// {
//     if(top==0)
//     {
//         printf("no elements are present");
//     }
//     else
//     {
//         printf("%d",top->data);
//     }
// }

// void display()
// {
//     struct node *temp;
//     if (top==0)
//     {
//         printf("no elements are present");
//     }
//     else
//     {
//         temp=top;
//         while(temp!=0)
//         {
//             printf("%d ",temp->data);
//             temp=temp->next;
//         }
//     }
// }
















