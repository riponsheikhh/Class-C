#include<stdio.h>
int main ()
{
    int i;
    scanf("%1d", & i);

    if (i%2==0)
    {
        printf("Even", i);
    }
    else
    {
        printf ("odd");
    }

    return 0;
}