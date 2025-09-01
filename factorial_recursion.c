#include<stdio.h>

int fact(int num)
{
    if(num==0)
    {
      return 1;  
    }
    if(num==1)
    {
      return 1;  
    }
    else
    {
        return num*fact(num-1);
    }
}

int main()
{
    int a;
    printf("Enter a number :\n");
    scanf("%d",&a);

    int b=fact(a);
    printf("Factorial of the number is : \n%d",b);

    return 0;
}
