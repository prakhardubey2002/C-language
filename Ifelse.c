#include <stdio.h>
int main(){
    int vippass=0,age;
    printf("Enter age\n");
    scanf("%d",&age);
    printf("Enter 1 if you have license\n");
    scanf("%d",&vippass);
    if(age<=70&&age>=18|| vippass==1)//&&-if both are true anf ||(or) if anyoune is true 
    {
        printf("Can drive");
    }else{
        printf("Cant drive");
    }
    return 0;


}