#include<stdio.h>
int main(){
    int n ,sum =0,remainder;
    printf("Enter number  \n");
    scanf("%d",&n );
    for (int i = 0; i < n; i++)
    {
        remainder= n%10;
        sum = remainder+ sum;
        n = n/10;
    }
    printf("Sum of digit is :%d",sum);
    return 0;
}