#include<stdio.h>
int lastDigit(int num){
    return num%10<0?num%10*-1:num%10;
}
void main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("Last Digit : %d", lastDigit(num));
}
