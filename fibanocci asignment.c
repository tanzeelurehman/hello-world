#include <stdio.h>
main()
{
    int i,x=0,y=1,s;
    printf("\nfibonacci series :");
    printf("\n%d\t%d",x,y);
    for(i=1;i<20;i++);
{
    s=x+y;
    printf("\t%D",s);
    x=y;
    y=s;
}
}
