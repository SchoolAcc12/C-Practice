#include <stdio.h>

/*C problems*/

// --------------- Find largest element in array ------------------

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

// --------------- Bubble Sort Algorithm ---------------------

// function to swap elements
// for the bubble sort algorithm
void swapElements(int arr[], int index1, int index2)
{
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

void bubbleSort(int arr[])
{

    int i;
    for (int i = 0; i < 4 - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swapElements(arr, i, i + 1);
        }
    }

    // printing the sorted list
    for (int i = 0; i < 4; i++)
    {
        printf("%d", arr[i]);
    }
}

// --------------- Selection Sort Algorithm ----------------------
void selectionSort(int arr[])
{
    int i, j;

    for (int i = 0; i < 4 - 1; i++)
    {
        int minimum = i;
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[j] < arr[minimum])
            {
                minimum = j;
            }
        }

        if (arr[minimum] != i)
        {
            swapElements(arr, minimum, i);
        }
    }

    // printing the sorted list
    for (int i = 0; i < 4; i++)
    {
        printf("%d", arr[i]);
    }
}

// ------------ Other problems --------------
void printUpToN()
{
    int n, i;

    printf("Type a number: \n");
    scanf("%d", &n);

    while (i < n)
    {
        i++;
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}

void decimalToBinary(int n)
{
    int remainder;
    int firstRemainder = n % 2;
    printf("%d\n", firstRemainder);

    while (n != 0)
    {
        n = n / 2;

        if (n != 0)
        {
            remainder = n % 2;
            printf("%d\n", remainder);
        }

        if (n == 0)
        {
            break;
        }
    }
}

// --------------- Main Function ----------------------

void main()
{
    decimalToBinary(20);
}