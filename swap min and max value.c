//find largest and smallest among 10 number swap min and max
#include<stdio.h>
void main()
{
    int max,a[10],i,min,temp,maxp=0,minp=0;
    //clrscr();
    for(i=0;i<10;i++)
    {
        printf("enter %d element:",i+1);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<10;i++)
    {
       if(max<a[i])
       {
           max=a[i];
           maxp=i;
       }

    }
    min=a[0];
    for(i=0;i<10;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            minp=i;
        }
    }
    printf("\n the largest number is= %d",max);
    printf("\n the smallest number is= %d",min);
    printf("\n after swaping\n");
    {
        temp=min;
        min=max;
        max=temp;
    }
    printf("\n the largest number is= %d",max);
    printf("\n the smallest number is= %d",min);

}
