#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int array[] = {12, 3, 45, 67, 23, 46, 90, 796, 5, 0};
    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (array[j] > array[j + 1])
                swap(&(array[j]), &(array[j + 1]));
        }
    }
    printf("array after sorting is: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", array[i]);
}