
#include <stdio.h>

int main() {
    int choice;
    printf("Enter the choice\n");
    printf("press 1 for sprite\npress 2 for mazza\npress 3 for coke\npress 4 for red bull\n",choice);
    scanf("%d",&choice);
    if(choice==1){
        printf("Take sprite\nThank you for shopping\nvisit again\n");

    }
    else if(choice==2){
        printf("Take mazza\nThank you for shopping\nvisit again\n");
    }
    else if(choice==3){
        printf("Take coke\nThank you for shopping\nvisit again\n");
    }
    else if(choice==4){
        printf("Take red bull\nThank you for shopping\nvisit again\n");
    }
    else{
        printf("please select the valid choice as shown in display\n");
    }
    return 0;
}
