#include<stdio.h>
int isEven(int a){
if(a % 2 == 0)
return 2;

else
return 1;
}

void main(){
int num;
printf("Enter a Number : ");
scanf("%d",&num);
printf("\n%d",isEven(num));
}
