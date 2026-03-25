#include<stdio.h>

int main(){
    
    int a=20;

    for (int i = 0; i <= a; i++)
    {
        if(i==0){
            printf("Number is Zero\n");
        }
        else if(i%2==0){
            printf("%d Even\n",i);
        }
        else{
            printf("%d Odd\n",i);
        }
    }

    


    return 0;
}