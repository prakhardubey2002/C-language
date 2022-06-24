//write a program to find out whether a student is pass or fail, if it require total if it require total of 40% and 33% in each subject to pass . Assume 3 subject and take marks as an input from the user

#include <stdio.h>
int main(){
    int physics,chemistry,maths;
    float total;
    printf("Enter physics marks-\n");
    scanf("%d",&physics);
    float total;
    printf("Enter chemistry marks-\n");
    scanf("%d",&chemistry);
    float total;
    printf("Enter maths marks-\n");
    scanf("%d",&maths);
    total=(physics+chemistry+maths)/3;
    printf("Yours maths score is %d ",&maths);
    printf("Yours chemistry score is %d ",&chemistry);
    printf("Yours physics score is %d ",&physics);
    printf("Yours total percentage is  is %f ",&total);
    if(total<40||physics<33||maths<33||chemistry<33){
        printf("You dont fulfill criteria you failed");
    }else{
        printf("You  fulfill criteria you passed");
    }
    return 0;

}