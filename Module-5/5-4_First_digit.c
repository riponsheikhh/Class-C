// #include<stdio.h>
// int main ()
// {
//     int i;
//     scanf("%1d", & i);

//     if (i%2==0)
//     {
//         printf("EVEN", i);
//     }
//     else
//     {
//         printf ("ODD");
//     }

//     return 0;
// }


#include<stdio.h>
int main ()
{
    int x;
    scanf ("%d", &x);
    int ans = x/1000;
    if (ans%2==0)
    {
        printf ("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}