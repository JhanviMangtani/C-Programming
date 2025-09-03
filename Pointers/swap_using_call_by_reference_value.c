#include<stdio.h>

int swap1(int a,int b)//pass by value
{
    int temp=a;
    a=b;
    a=temp;
    printf("First number is %d\n",a);
    printf("Second number is %d\n",b);
}

int swap2(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("First number is %d\n",*x);
    printf("Second number is %d\n",*y);
}

int main()
{
    int m,n;
    printf("Enter first number :\n");
    scanf("%d",&m);
    printf("Enter second number :\n");
    scanf("%d",&n);

    printf("Swap using pass by value : \n");
    swap1(m,n);

    printf("Swap using pass by reference : \n");
    swap2(&m,&n);

    return 0;

}