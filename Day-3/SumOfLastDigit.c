#include<stdio.h>
int sumOfLastDigit(int num1,int num2){
    num1 =  num1<0?num1*-1:num1;
    num2 =  num2<0?num2*-1:num2;
    return (num1%10)+(num2%10);
}
void main(){
    int num1,num2;
    printf("Enter 2 Numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Last Digit : %d", sumOfLastDigit(num1,num2));
}
