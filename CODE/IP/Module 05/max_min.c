#include<stdio.h>
int main(){

    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);

    if (A>B && A>C)
    {
        if(B>C){
            printf("%d %d",C,A);
        }
        else{
            printf("%d %d",B,A);
        }
    }
    else if(B>A && B>C){
        if (A>C)
        {
            printf("%d %d",C,B);
        }
        else{
            printf("%d %d",A,B);
        }
    }
    else if(C>A && C>B){
        if (A>B)
        {
            printf("%d %d",B,C);
        }
        else{
            printf("%d %d",A,C);
        }
    }
    else if(A==B){
        if(A>C){
            printf("%d %d",C,A);
        }
        else{
            printf("%d %d",A,C);
        }
    }
    else if(B==C){
        if(B>A){
            printf("%d %d",A,B);
        }
        else{
            printf("%d %d",B,A);
        }
    }
    else if(A==C){
        if(A>B){
            printf("%d %d",B,A);
        }
        else{
            printf("%d %d",A,B);
        }
    }
    else if(A==B && B==C){
        printf("%d %d",A,C);
    }
    return 0;
}