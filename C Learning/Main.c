#include <stdio.h>

/*C problems*/

void findLargestElementInArr(int arr[])
{
    int i;
    int max;

    for (i = 0; i < 4 - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            arr[i] = arr[i + 1];
            max = arr[i];
        }
        if (arr[i] > arr[i + 1])
        {
            arr[i + 1] = arr[i];
            max = arr[i + 1];
        }
    }
    printf("%d", max);
}

void main()
{
    int myNumbers[] = {15, 25, 55, 66};
    findLargestElementInArr(myNumbers);
}