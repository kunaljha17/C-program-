#include<stdio.h>

int swap(int*a,int*b){
       int temp= *a;
       *a=*b;
       *b=temp;
}
int main(){
    int num1,num2;
    printf("Enter two number:- a and b\n");
    scanf("%d %d",&num1,&num2);
    printf("Without swaping a= %d and b=%d\n",num1,num2);
    swap(&num1,&num2);
    printf("After swaping a= %d and b=%d",num1,num2);
    return 0;
}