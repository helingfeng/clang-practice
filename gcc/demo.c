#include <stdio.h>

int main()
{
    int arr[] = {8, 3, 9, 7, 1};
    int len = (int)sizeof(arr) / sizeof(*arr);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}