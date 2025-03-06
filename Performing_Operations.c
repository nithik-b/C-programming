// Program to number id odd or even.
#include<stdio.h>
int result(int a,int b,char c){
    if(c=='+'){
        printf("%d",a+b);
    } else if (c=='-') {
        printf("%d",a-b);
    } else if (c=='*') {
        printf("%d",a*b);
    }else{
        printf("%d",a/b);
    }
};

void main(){
    int a,b,d;    
    char c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Choose any operation (+,-,*,/):");
    scanf(" %c",&c);
    result(a,b,c);
}
