//creating and printing a single linked list

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// int main()
// {
//     struct node *new,*temp,*head=0;
//     int ch=1;
//     while(ch)
//     {
//         new=(struct node *)malloc(sizeof(struct node));
//         printf("enter the data :");
//         scanf("%d",&new->data);
//         new->next=0;
//         if(head==0)
//         {
//             head=new;
//             temp=new;
//         }
//         else
//         {
//             temp->next=new;
//             temp=new;
//         }
//         printf("do you want to continue 0,1 :");
//         scanf("%d",&ch);
//     }
//     temp=head;
//     while(temp!=0)
//     {
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }
// }




//insertion of single linked list 1)begining 2)middle 3)ending

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void main()
// {
//     struct node *new,*head=0,*temp;
//     int ch=1;
//     while(ch)
//     {
//         new=(struct node*)malloc(sizeof(struct node));
//         printf("enter the data :");
//         scanf("%d",&new->data);
//         new->next=0;
//         if(head==0)
//         {
//             head=new;
//             temp=new;
//         }
//         else
//         {
//             temp->next=new;
//             temp=new;
//         }
//         printf("do you want to continue 0,1 :");
//         scanf("%d",&ch);
//     }
//     int choice;
//     new=(struct node*)malloc(sizeof(struct node));
//     printf("enter the data of new node :");
//     scanf("%d",&new->data);
//     new->next=0;
//     printf("enter 1-insert at begining, 2-at middle, 3-at end :");
//     scanf("%d",&choice);

//     switch(choice)
//     {
//         case 1:
//             new->next=head;
//             head=new;
//             temp=head;
//             while(temp!=0)
//             {
//                 printf("%d ",temp->data);
//                 temp=temp->next;
//             }
//             break;
//         case 2:
//             int pos,i=1;
//             temp=head;
//             printf("enter the position of node :");
//             scanf("%d",&pos);
//             while(i<pos-1)
//             {
//                 temp=temp->next;
//                 i++;
//             }
//             new->next=temp->next;
//             temp->next=new;
//             temp=head;
//             while(temp!=0)
//             {
//                 printf("%d ",temp->data);
//                 temp=temp->next;
//             }
//             break;
//         case 3:
//             temp=head;
//             while(temp->next!=0)
//             {
//                 temp=temp->next;
//             }
//             temp->next=new;
//             temp=head;
//             while(temp!=0)
//             {
//                 printf("%d ",temp->data);
//                 temp=temp->next;
//             }
//             break;
//         default :
//             printf("enter data correctly");
//             break;
//     }
// }





//deleting nodes in single linked list

// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *next;
// };
// void main()
// {
//     struct node *new,*head=0,*temp,*temp1;
//     int ch=1,count=0;
//     while(ch)
//     {
//         new=(struct node*)malloc(sizeof(struct node));
//         printf("enter the data: ");
//         scanf("%d",&new->data);
//         new->next=0;
//         count++;
//         if (head==0)
//         {
//             head=new;
//             temp=new;
//         }
//         else
//         {
//             temp->next=new;
//             temp=new;
//         }
//         printf("do you want to continue(0,1): ");
//         scanf("%d",&ch);
//     }
//     int choice;
//     printf("enter 1)for delete at begining 2)for delete a node at ending 3)for delete node at certain position");
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
//             int pos,i=1;
//             printf("enter node position to delete: ");
//             scanf("%d",&pos);
//             temp=head;
//             if(pos>1 && pos<count)
//             {
//                 while(i<pos)
//                 {
//                     temp1=temp;
//                     temp=temp->next;
//                     i++;
//                 }
//                 temp1->next=temp->next;
//                 free(temp);
//                 break;
//             }
//     }
//     temp=head;
//     while(temp!=0)
//     {
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }
// }




//searchimg an element in the 

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void main()
// {
//     struct node *head=0,*temp,*new;
//     int ch=1;
//     while(ch)
//     {
//         new=(struct node*)malloc(sizeof(struct node));
//         printf("enter the data:");
//         scanf("%d",&new->data);
//         new->next=0;
//         if (head==0)
//         {
//             head=temp=new;
//         }
//         else
//         {
//             temp->next=new;
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
//             key=1;
//         }
//         temp=temp->next;
//     }
//     if (key==1)
//     {
//         printf("key is present in the linked list");
//     }
//     else
//     {
//         printf("key is not found");
//     }
// }






//concatination of two single lists

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void main()
// {
//     struct node *head1=0,*new1,*temp1;
//     int ch=1;
//     while(ch)
//     {
//         new1=(struct node*)malloc(sizeof(struct node));
//         printf("enter the data: ");
//         scanf("%d",&new1->data);
//         new1->next=0;
//         if(head1==0)
//         {
//             head1=temp1=new1;
//         }
//         else
//         {
//             temp1->next=new1;
//             temp1=new1;
//         }
//         printf("do u want to continue(0,1): ");
//         scanf("%d",&ch);
//     }
//     struct node *head2=0,*temp2,*new2;
//     int ch2=1;
//     while(ch2)
//     {
//         new2=(struct node*)malloc(sizeof(struct node));
//         printf("enter the data for second list:");
//         scanf("%d",&new2->data);
//         new2->next=0;
//         if(head2==0)
//         {
//             head2=temp2=new2;
//         }
//         else
//         {
//             temp2->next=new2;
//             temp2=new2;
//         }
//         printf("do u want to continue(0,1): ");
//         scanf("%d",&ch2);
//     }
//     struct node *ptr=head1;
//     while(ptr->next!=0)
//     {
//         ptr=ptr->next;
//     }
//     ptr->next=head2;
//     ptr=head1;
//     while(ptr!=0)
//     {
//         printf("%d ",ptr->data);
//         ptr=ptr->next;
//     }
// }





//reversing of single linked list

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
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
//         if(head==0)
//         {
//             head=temp=new;
//         }
//         else
//         {
//             temp->next=new;
//             temp=new;
//         }
//         printf("do u want to coontinue(0,1): ");
//         scanf("%d",&ch);
//     }
//     head=reverse(head);
//     temp=head;
//     while(temp!=0)
//     {
//         printf("%d",temp->data);
//         temp=temp->next;
//     }
// }
// struct node *reverse(struct node *head)
// {
//     struct node *temp1=0,*temp2=0;
//     while(head!=0)
//     {
//         temp1=head->next;
//         head->next=temp2;
//         temp2=head;
//         head=temp1;
//     }
//     head=temp2;
//     return head;
// }




//sorting single list elements

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void main()
// {
//     struct node *head=0,*temp,*temp2,*ptr,*new;
//     int ch=1,count=0;
//     while(ch)
//     {
//         new=(struct node*)malloc(sizeof(struct node));
//         printf("enter the data: ");
//         scanf("%d",&new->data);
//         new->next=0;
//         count++;
//         if(head==0)
//         {
//             head=temp=new;
//         }
//         else
//         {
//             temp->next=new;
//             temp=new;
//         }
//         printf("do u want to continue(0,1): ");
//         scanf("%d",&ch);
//     }
//     ptr=head;
//     int data2,i,j;
//     for (i=0;i<count;i++)
//     {
//         temp=ptr;
//         temp2=ptr->next;
//         for (temp;temp2!=0;temp2=temp2->next)
//         {
//             if (temp->data>temp2->data)
//             {
//                 data2=temp2->data;
//                 temp2->data=temp->data;
//                 temp->data=data2;
//             }
//         }
//         ptr=ptr->next;
//     }
//     temp=head;
//     while(temp!=0)
//     {
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }
// }
