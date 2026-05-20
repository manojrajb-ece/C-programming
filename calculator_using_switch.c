#include <stdio.h>

int main() {
    int choice;
    float a,b;
    printf("enter the first num:\n");
    scanf("%f",&a);
     printf("enter the second num:\n");
    scanf("%f",&b);
    printf("press 1 for addtion\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for division\n ");
    printf("press 4 for multiplicaton\n");
    printf("=====================================\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf(" addtion of two numbers is: %f \n",a+b );
        break;
        case 2:
        printf("subtraction of two numbers is: %f \n",a-b );
        break;
        case 3:
        printf("divison of two numbers is: %f \n",a/b );
        break;
        case 4:
        printf("multiplication of two numbers is: %f \n",a*b );
        break;
        default:
        printf("INVALID CHOICE\n");
        break;
    }
    return 0;
}
