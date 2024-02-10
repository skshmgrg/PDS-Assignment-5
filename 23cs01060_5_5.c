#include <stdio.h>
int main()
{
    int a, sum = 0;
    char command;
    for (int i = 1;; i++)
    {
        printf("provide a number\n");
        scanf("%d", &a);
        if (a % 2 == 0)
            sum += a;
        else
            sum += 0;
        printf("do you want to continue\n");
        while(1)
        {
            scanf(" %c", &command);
            if (command == 'y')
                break;
            if (command == 'n')
                break;
            else
                printf("not a valid input\n");
            continue;
        }
        if (command == 'n')
            break;
    }
    printf("the sum is %d", sum);
}