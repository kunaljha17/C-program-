#include<stdio.h>

int main(){
    int n, a=0,b=1,sum;
    printf("Enter upper limit:\n");
    scanf("%d",&n);
    printf("%d %d\t",a,b);
    for (int i = 0; i < n; i++)
    {
        sum = a+b;
        a =b;
        b =sum;
        printf("%d\t",sum);
    }
    
    return 0;
}