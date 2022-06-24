#include <stdio.h>
int main(){
    int rating;
    printf("Enter rating between 1 to 5\n");
    scanf("%d",&rating);
    switch (rating)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    default:
    printf("invalid input");
        break;
    }
    return 0;
}