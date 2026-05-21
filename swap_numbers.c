#include <stdio.h>

int main() {
    int num1,num2;
    int temp;
    printf("Enter the two numbers\n");
    printf("Enter first number\n");
    scanf("%d",&num1);
    printf("Enter second number\n");
    scanf("%d",&num2);
       printf("===============================================\n");
    printf("The value before swap is \n first number=%d \n second number=%d\n", num1,num2);
    printf("===============================================\n");
    temp=num1;
    num1=num2;
    num2=temp;
    printf("The value after swap is \nfirst number=%d \n second number=%d\n", num1,num2);
    printf("===============================================\n");
    
    return 0;
}
