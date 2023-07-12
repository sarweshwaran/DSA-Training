#include<stdio.h>
int isOdd(int a){
if(a % 2 == 0)
return 1;

else
return 2;
}

void main(){
int num;
printf("Enter a Number : ");
scanf("%d",&num);
printf("\n%d",isOdd(num));
}
