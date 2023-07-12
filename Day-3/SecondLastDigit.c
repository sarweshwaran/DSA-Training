#include<stdio.h>
int secondLastDigit(int num){
    num = num<0?num*-1:num;
    return (num/10 )%10;
}
void main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("Second Last Digit : %d", secondLastDigit(num));
}
