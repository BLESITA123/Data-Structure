#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int s[MAX],top=-1;
void push(int item){
if(top==MAX-1){
printf("STACK OVERFLOW\n");
}
else{
top=top+1;
s[top]=item;
}
}
void pop()
{
int item;
if(top==-1)
{
printf("STACK UNDERFLOW\n");
}
else
{
item=s[top];
printf("popped item:%d\n",item);
top=top-1;
}
}
void display(){
int i;
if(top==-1){
printf("stack is empty\n");
}
else{
printf("The stack elements are \n");
for(i=top;i>=0;i--)
printf("%d\n",s[i]);
}
}
void palindrome(){
int flag=1,i;
printf("Stack contents are\n");
for(i=top;i>=0;i--)
printf("%d\n",s[i]);
printf("Reverse of stack contents are\n");
for(i=0;i<=top;i++)
printf("%d\n",s[i]);
for(i=0;i<=top/2;i++)
if(s[i]!=s[top-i]){
flag=0;
break;
}
if(flag==1){
printf("Its a palindrome number\n");
}
else{
printf("Its not a palindrome number\n");
}
}
void main(){
int choice,item;
while(1){
printf("MENU\n");
printf("1.Push the elements to stack and overflow demo\n");
printf("2.Pop the elements from the stack and undeflow demo\n");
printf("3.Palindrome\n");
printf("4.Display\n");
printf("5.Exit\n");
printf("Enter the choice:\n");
scanf("%d",&choice);
switch(choice){
case 1:printf("Enter the elements to be pushed:");
scanf("%d",&item);
push(item);
break;
case 2:pop();
break;
case 3:palindrome();
break;
case 4:display();
break;
case 5:exit(0);
break;
default:printf("invalid function\n");
break;
}
}
}
