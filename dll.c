//creating and printing double linked list

// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// void main()
// {
//     struct node *head=0,*new,*temp;
//     int ch=1;
//     while (ch)
//     {
//         new=(struct node*)malloc(sizeof(struct node));
//         printf("enter the data: ");
//         scanf("%d",&new->data);
//         new->next=0;
//         new->prev=0;
//         if (head==0)
//         {
//             head=new;
//             temp=new;
//         }
//         else
//         {
//             temp->next=new;
//             new->prev=temp;
//             temp=new;
//         }
//         printf("do you want to continue(0,1): ");
//         scanf("%d",&ch);
//     }
//     temp=head;
//     while(temp!=0)
//     {
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }
// }




//insertion a node in double linked list

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next,*prev;
// };
// void main()
// {
//     struct node *head=0,*new,*temp,*tail,*temp1;
//     int ch=1,count=0;
//     while(ch)
//     {
//         new=(struct node*)malloc(sizeof(struct node));
//         printf("enter the data: ");
//         scanf("%d",&new->data);
//         new->next=0;
//         new->prev=0;
//         count++;
//         if(head==0)
//         {
//             head=new;
//             temp=new;
//             tail=new;
//         }
//         else
//         {
//             temp->next=new;
//             new->prev=temp;
//             temp=new;
//             tail=new;
//         }
//         printf("do you want to continue(0,1): ");
//         scanf("%d",&ch);
//     }
//     new=(struct node*)malloc(sizeof(struct node));
//     printf("enter new node data: ");
//     scanf("%d",&new->data);
//     new->next=0;
//     new->prev=0;
//     int choice;
//     printf("enter 1)for insert node at beginiing 2)for insert at ending 3)for insert at position");
//     scanf("%d",&choice);
//     switch(choice)
//     {
//         case 1:
//             head->prev=new;
//             new->next=head;
//             head=new;
//             break;
//         case 2:
//             tail->next=new;
//             new->prev=tail;
//             break;
//         case 3:
//             int pos,i=1;
//             printf("enter position of node to insert: ");
//             scanf("%d",&pos);
//             temp=head;
//             if (pos>1 && pos<count)
//             {
//                 while(i<pos)
//                 {
//                     temp1=temp;
//                     temp=temp->next;
//                     i++;
//                 }
//                 new->next=temp;
//                 temp->prev=new;
//                 new->prev=temp1;
//                 temp1->next=new;
//             }
//             break;
//     }
//     temp=head;
//     while(temp!=0)
//     {
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }
// }




//deleting nodes in double linked list

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next,*prev;
// };
// void main()
// {
//     struct node *head=0,*temp,*new,*temp1;
//     int ch=1,count=0;
//     while(ch)
//     {
//         new=(struct node*)malloc(sizeof(struct node));
//         printf("enter the data: ");
//         scanf("%d",&new->data);
//         new->next=0;
//         new->prev=0;
//         count++;
//         if(head==0)
//         {
//             head=new;
//             temp=new;
//         }
//         else
//         {
//             temp->next=new;
//             new->prev=temp;
//             temp=new;
//         }
//         printf("do u want to continue:(0,1): ");
//         scanf("%d",&ch);
//     }
//     int choice;
//     printf("enter 1)for delete node at beginig 2)for delete node at end 3)for certain position");
//     scanf("%d",&choice);
//     switch(choice)
//     {
//         case 1:
//             temp=head;
//             head=head->next;
//             free(temp);
//             break;
//         case 2:
//             temp=head;
//             while(temp->next!=0)
//             {
//                 temp1=temp;
//                 temp=temp->next;
//             }
//             temp1->next=0;
//             free(temp);
//             break;
//         case 3:
//             temp=head;
//             int pos,i=1;
//             printf("enter position of node: ");
//             scanf("%d",&pos);
//             if(pos>1 && pos<count)
//             {
//                 while(i<pos)
//                 {
//                     temp1=temp;
//                     temp=temp->next;
//                     i++;
//                 }
//                 temp1->next=temp->next;
//                 temp->next->prev=temp1;
//                 free(temp);
//             }
//             break;
//     }
//     temp=head;
//     while(temp!=0)
//     {
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }
// }




//searching an element in the double linked list

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next,*prev;
// };
// void main()
// {
//     struct node *head=0,*temp,*new;
//     int ch=1;
//     while(ch)
//     {
//         new=(struct node *)malloc(sizeof(struct node));
//         printf("enter the data: ");
//         scanf("%d",&new->data);
//         new->next=0;
//         new->prev=0;
//         if(head==0)
//         {
//             head=temp=new;
//         }
//         else
//         {
//             temp->next=new;
//             new->prev=temp;
//             temp=new;
//         }
//         printf("do u want to continue(0,1): ");
//         scanf("%d",&ch);
//     }
//     int key,c;
//     printf("enter the element you want to search: ");
//     scanf("%d",&key);
//     temp=head;
//     while(temp!=0)
//     {
//         if(temp->data==key)
//         {
//             c=1;
//         } 
//         temp=temp->next;
//     }
//     if(c==1)
//     {
//         printf("key is found");
//     }
//     else
//     {
//         printf("key is not found");
//     }
// }




//reversing double linked list

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next,*prev;
// };
// struct node *reverse(struct node*);
// void main()
// {
//     struct node *head=0,*temp,*new;
//     int ch=1;
//     while(ch)
//     {
//         new=(struct node*)malloc(sizeof(struct node));
//         printf("enter the data: ");
//         scanf("%d",&new->data);
//         new->next=0;
//         new->prev=0;
//         if(head==0)
//         {
//             head=temp=new;
//         }
//         else
//         {
//             temp->next=new;
//             new->prev=temp;
//             temp=new;
//         }
//         printf("do u want to continue(0,1): ");
//         scanf("%d",&ch);
//     }
//     head=reverse(head);
//     while(temp!=0)
//     {
//         printf("%d",temp->data);
//         temp=temp->next;
//     }
// }
// struct node *reverse(struct node *head)
// {
//     struct node *ptr1=head;
//     struct node *ptr2=head->next;
//     ptr1->next=0;
//     ptr1->prev=ptr2;
//     while(ptr2!=0)
//     {
//         ptr2->prev=ptr2->next;
//         ptr2->next=ptr1;
//         ptr1=ptr2;
//         ptr2=ptr2->prev;
//     }
//     head=ptr1;
//     return head;
// }









