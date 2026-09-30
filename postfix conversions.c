// infix to postfix conversion 

// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// #define N 15
// char stack[N];
// int top=-1;
// void push(char x)
// {
//     top++;
//     stack[top]=x;
// }
// char pop()
// {
//     return stack[top--];
// }
// int priority(char x)
// {
//     if(x=='(')
//     {
//         return 0;
//     }
//     else if(x=='+' || x=='-')
//     {
//         return 1;
//     }
//     else if(x=='*' || x=='/' || x=='%')
//     {
//         return 2;
//     }
//     else if(x=='^')
//     {
//         return 3;
//     }
// }
// void main()
// {
//     char infix[20],postfix[20],ch;
//     int i,j=0;
//     gets(infix);
//     for (i=0;infix[i]!='\0';i++)
//     {
//         ch=infix[i];
//         if(ch=='(')
//         {
//             push(ch);
//         }
//         else if(isalpha(ch) || isdigit(ch))
//         {
//             postfix[j]=ch;
//             j++;
//         }
//         else if(ch==')')
//         {
//             while(stack[top]!='(' || top!=-1)
//             {
//                 postfix[j]=pop();
//                 j++;
//             }
//             pop();
//         }
//         else
//         {
//             while(priority(ch)<=priority(stack[top]))
//             {
//                 postfix[j]=pop();
//                 j++;
//             }
//             push(ch);
//         }
//     }
//     while(top!=-1)
//     {
//         postfix[j]=pop();
//         j++;
//     }
//     postfix[j]!='\0';
//     puts(postfix);
// }




//evalution of postfix expression

// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// #include<math.h>
// #define N 15
// int stack[N];
// int a,b;
// int top=-1;
// void push(int x)
// {
//     top++;
//     stack[top]=x;
// }
// int pop()
// {
//     return stack[top--];
// }
// void main()
// {
//     int i,r,choice;
//     char postfix[20],ch;
//     gets(postfix);
//     for(i=0;postfix[i]!='\0';i++)
//     {
//         ch=postfix[i];
        
//         if(isdigit(ch))
//         {
//             push(postfix[i]-48);
//         }
//         else
//         {
//             a=pop();
//             b=pop();
//             printf("enter +,-,*,/,%");
//             scanf("%d",&choice);
//             switch(choice)
//             {
//                 case '+':
//                     push(b+a);
//                     break;
//                 case '-':
//                     push(b-a);
//                     break;
//                 case '*':
//                     push(b*a);
//                     break;
//                 case '/':
//                     push(b/a);
//                     break;
//                 case '%':
//                     push(b%a);
//                     break;
//                 // case '^':
//                 //     r=pow(b,a);
//                 //     push(r);
//                 //     break;
//                 default :
//                     printf("there is no such case");
//             }
//         }
//     }
//     printf("%d",pop());
// }















