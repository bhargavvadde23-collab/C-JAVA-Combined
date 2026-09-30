#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	int i;
	char ch[20];
	printf("enter the string:");
	scanf("%s",ch);
	int l=strlen(ch);
	char ch2[20];
	char s1[20],s2[20];
	int k,m=0;
	for(i=0;ch[i]!='\0';i++)
	{
		if(isalpha(ch[i]))
		        s1[k++]=ch[i];
		        s1[k]='\0';
		if(isdigit(ch[i]))
			s2[m++]=ch[i];
			s2[m]='\0';
	}
	printf("alphabets in string are:%s\n",s1);
	printf("digits in string are:%s",s2);
}
