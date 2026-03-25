#include<stdio.h>
int main(){

    int a;

    while (scanf("%d",&a))
    {
        if (a!=1999)
        {
            printf("Wrong\n");
        }
        else{
            printf("Correct");
            break;    
        }
              
    }
    

    return 0;
}