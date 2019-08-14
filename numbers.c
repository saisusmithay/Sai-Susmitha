#include<stdio.h>


void main()
{
    int n=6;
    
    if(n >  0)
        printf("%d is a positive number",n);
    else if(n < 0)
        printf("%d is a negative number",n);
    else
        printf("0 is neither positive nor negative");
    return 0;
}
