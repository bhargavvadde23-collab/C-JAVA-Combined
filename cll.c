//(opt) creating and printing circular linked list

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void main()
// {
//     struct node *head=0,*new,*temp,*tail;
//     int ch=1;
//     while(ch)
//     {
//         new=(struct node*)malloc(sizeof(struct node));
//         printf("enter the data: ");
//         scanf("%d",&new->data);
//         new->next=0;
//         if(head==0)
//         {
//             head=new;
//             temp=new;
//             tail=new;
//         }
//         else
//         {
//             temp->next=new;
//             temp=new;
//         }
//         temp->next=head;
//         printf("do u want to continue: (0,1): ");
//         scanf("%d",&ch);
//     }
//     temp=head;
//     while(temp->next!=head)
//     {
//         printf("%d ",temp->data);
//         temp=temp->next;
//     }
//     printf("%d",temp->data);
// }




//insertion at ending

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *add_at_end(struct node*,int);
// void main()
// {
//     struct node *head=0,*new,*temp,*tail;
//     int ch=1;
//     while(ch)
//     {
//         new=(struct node*)malloc(sizeof(struct node));
//         printf("enter the data: ");
//         scanf("%d",&new->data);
//         new->next=0;
//         if(head==0)
//         {
//             head=new;
//             temp=new;
//             tail=new;
//         }
//         else
//         {
//             temp->next=new;
//             temp=new;
//         }
//         temp->next=head;
//         printf("do u want to continue: (0,1): ");
//         scanf("%d",&ch);
//     }

//     temp=add_at_end(temp,5);
//     struct node *ptr=temp->next;

//     do
//     {
//         printf("%d ",ptr->data);
//         ptr=ptr->next;
//     } 
//     while(ptr!=temp->next);
// }
// struct node *add_at_end(struct node *temp,int data)
// {
//     struct node *new=malloc(sizeof(struct node));
//     new->data=data;
//     new->next=0;
//     new->next=temp->next;
//     temp->next=new;
//     temp=temp->next;
//     return temp;
// }





//insertion at begining

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *add_at_beg(struct node*,int);
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
//         temp->next=head;
//         printf("do u want to continue(0,1): ");
//         scanf("%d",&ch);
//     }
//     temp=add_at_beg(temp,4);
//     struct node *ptr=temp->next;

//     do
//     {
//         printf("%d ",ptr->data);
//         ptr=ptr->next;
//     } while (ptr!=temp->next);
    
// }
// struct node *add_at_beg(struct node *temp,int data)
// {
//     struct node *new=malloc(sizeof(struct node));
//     new->data=data;
//     new->next=0;
//     new->next=temp->next;
//     temp->next=new;
//     return temp;
// }





//insertion at certain position

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *add_at_pos(struct node*,int,int);
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
//         temp->next=head;
//         printf("do u want to continue(0,1): ");
//         scanf("%d",&ch);
//     }
//     temp=add_at_pos(temp,3,6);
//     struct node *ptr=temp->next;
//     do
//     {
//         printf("%d ",ptr->data);
//         ptr=ptr->next;
//     } while (ptr!=temp->next);
// }
// struct node *add_at_pos(struct node *temp,int pos,int data)
// {
//     struct node *ptr=temp->next;
//     struct node *new=malloc(sizeof(struct node));
//     new->data=data;
//     new->next=0;
//     int i=1;
//     while(i<pos-1)
//     {
//         ptr=ptr->next;
//         i++;
//     }
//     new->next=ptr->next;
//     ptr->next=new;

//     if(ptr==temp)
//     {
//         temp=temp->next;
//     }
//     return temp;
// }




//deletion at begining

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *del_beg(struct node*);
// void main()
// {
//     struct node *head=0,*new,*temp;
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
//         temp->next=head;
//         printf("do u want to continue(0,1): ");
//         scanf("%d",&ch);
//     }

//     temp=del_beg(temp);
//     struct node *ptr=temp->next;
//     do
//     {
//         printf("%d ",ptr->data);
//         ptr=ptr->next;
//     } while (ptr!=temp->next);
// }
// struct node *del_beg(struct node *temp)
// {
//     struct node *ptr2=temp->next;
//     if(temp->next==temp)
//     {
//         free(temp);
//         temp=0;
//         return temp;
//     }
//     temp->next=ptr2->next;
//     free(ptr2);
//     ptr2=0;
//     return temp;
// }




//deleting the last node

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *del_end(struct node*);
// void main()
// {
//     struct node *head=0,*new,*temp;
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
//         temp->next=head;
//         printf("do u want to continue(0,1): ");
//         scanf("%d",&ch);
//     }
//     temp=del_end(temp);
//     struct node *ptr=temp->next;
//     do
//     {
//         printf("%d ",ptr->data);
//         ptr=ptr->next;
//     } while (ptr!=temp->next);
    
// }
// struct node *del_end(struct node *temp)
// {
//     struct node *ptr=temp->next;
//     while(ptr->next!=temp)
//     {
//         ptr=ptr->next;
//     }
//     ptr->next=temp->next;
//     free(temp);
//     temp=ptr;
//     return temp;
// }



//deletion at certain position

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *del_pos(struct node*,int);
// void main()
// {
//     struct node *head=0,*new,*temp;
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
//         temp->next=head;
//         printf("do u want to continue(0,1): ");
//         scanf("%d",&ch);
//     }
//     temp=del_pos(temp,3);
//     struct node *ptr=temp->next;
//     do
//     {
//         printf("%d ",ptr->data);
//         ptr=ptr->next;
//     } while (ptr!=temp->next);
// }
// struct node *del_pos(struct node *temp,int pos)
// {
//     struct node *ptr=temp->next;
//     int i=1;
//     while(i<pos-1)
//     {
//         ptr=ptr->next;
//         i++;
//     }
//     struct node *ptr2=ptr->next;
//     ptr->next=ptr2->next;
//     free(ptr2);
//     return temp;
// }











