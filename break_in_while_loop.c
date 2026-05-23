#include <stdio.h>

int main() {
    int i=0,num;
    while(i<10){
        printf("the vale of i %d\n enter the number\n",i);
        scanf("%d",&num);
        if(i==2){
            continue;
        }
            printf("Hello world\n");
            i++;
        
    }
    return 0;
}
