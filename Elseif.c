#include <stdio.h>
int main(){
    int num;
    printf("Enter your number\n");
    scanf("%d",&num);
    if (num==1)
    {
        printf("Your number is 1");
    }
    else if(num==2)
    {
        printf("Your number is 2");
    }
    else if(num==3)
    {
        printf("Your number is 3");
    }
    else if(num==4)
    {
        printf("Your number is 4");
    }
    else{
        printf("Your Number is not 1,2,3,4");
    }
    return 0;
    
}