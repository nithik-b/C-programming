// Program to number id odd or even.
#include<stdio.h>
int result(int a,int b,int c){
   if (a > b) {
        if (a > c) {
            printf("%d is the largest number", a);
        } else {
            printf("%d is the largest number", c);
        }
    } else {
        if (b > c) {
            printf("%d is the largest number", b);
        } else {
            printf("%d is the largest number", c);
        }
    }
    };

void main(){
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf(" %d",&c);
    result(a,b,c);
}
