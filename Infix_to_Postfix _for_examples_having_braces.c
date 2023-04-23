#include<stdio.h>
#include<string.h>
int precedence(char ch);
char *infix_postfix(char *infix);
int main()
{
	char infix[100],*postfix;
	scanf("%[^\n]s",&infix);
	postfix=infix_postfix(infix);
	printf("%s",postfix);
	return 0;
}
char *infix_postfix(char *infix)
{
	int i,j=0,n,top=-1;
	n=strlen(infix);                      // Here i is working on infix and j is working on postfix
	char st[n],op;
	static char postfix[1000];
	for(i=0;i<n;i++)
	{
		if(precedence(infix[i]))
		{
		    if(top == -1 || infix[i] == '(' || precedence(infix[i])>precedence(st[top]))
			{
				st[++top]=infix[i];
			}
			else if(infix[i] == ')')
			{
				op = st[top--];
				while(op != '(')
				{
					postfix[j++] = op;
					op = st[top--];
				}
			}
			else
		    {
			    while(top!=-1 && precedence(infix[i])<=precedence(st[top]))
			    {					    
				    op=st[top--];
					postfix[j++]=op;
				}
				st[++top]=infix[i];
		    }
		}
		else  //operand
	    {
	     	postfix[j++]=infix[i];
	    }
	}
	for(i=top;i>=0;i--)
	{
		postfix[j++]=st[i];
	}
	printf("%s ",postfix);
	//return postfix;
}
int precedence(char ch)
{
	switch(ch)
	{
		case '^':  return 3;
		case '*':  return 2;
		case '/':  return 2;
		case '+':  return 1;
		case '-':  return 1;
		case '(':  return -1;
		case ')':  return -1;
		default :  return 0;
	}
}