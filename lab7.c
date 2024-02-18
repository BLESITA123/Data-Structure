#include<stdio.h>
#include<math.h>
void Tower(int n,char s,char t,char d){
if (n==0)return;
Tower(n-1,s,d,t);
printf("move the tower %d from %c to %c\n",n,s,d);
Tower(n-1,t,s,d);
}
void main(){
int n;
printf("\n Enter the number of towers:");
scanf("%d",&n);
Tower(n,'a','b','c');
printf("\n The total number of towers moved=%0.1f",pow(2,n)-1);
}

