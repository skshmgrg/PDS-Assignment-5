#include<stdio.h>
int main()
{
    int i,j,n,k;
     printf("enter the number of rows of the pyramid\t");
     scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1; j<n-(i-1); j++) printf(" ");
        for(k=1;k<=i;k++) printf("* ");
        printf("\n");
    }
     
}
//method 2 (keeping in mind time complexity)
// #include <stdio.h>

// int main()

// {
//     int i, j, n;

//     printf("enter the number of rows of the pyramid\t");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)

//     {

//         for (j = 1; j <= n; j++)

//         {

//             if (j >= (n - (i - 1)) && j <= (n + (i - 1)))

//                 printf("* ");

//             else

//                 printf(" ");
//         }

//         printf("\n");
//     }
// }
