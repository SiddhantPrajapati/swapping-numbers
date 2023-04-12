//WAP to implement function swap using two different parameter passing mechanism.
#include<stdio.h>
int swap(int,int);//function declaration
void main()
{
    int a,b;
    printf("enter first value:");
    scanf("%d",&a);
    printf("enter second value:");
    scanf("%d",&b);
    swap(a,b);  //function calling
    printf("\n after swaping \n");
    printf("\n first value:%d",b);
    printf("\n second value:%d",a);
}
int swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    return 0;
}

