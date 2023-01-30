#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

    int arr[100000];
    int i, n, maxx, minn;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            minn = abs(arr[i] - arr[i + 1]);
            maxx = abs(arr[i] - arr[n - 1]);
        }
        else if (i == n - 1)
        {
            minn = abs(arr[i] - arr[i - 1]);
            maxx = abs(arr[i] - arr[0]);
        }
        else
        {
            if (abs(arr[i] - arr[i - 1]) > abs(arr[i] - arr[i + 1]))
            {
                minn = abs(arr[i] - arr[i + 1]);
            }
            else
                minn = abs(arr[i] - arr[i - 1]);
            if (abs(arr[i] - arr[0]) > abs(arr[i] - arr[n - 1]))
            {
                maxx = abs(arr[i] - arr[0]);
            }
            else
            {
                maxx = abs(arr[i] - arr[n - 1]);
            }
        }
        printf("%d %d\n", minn, maxx);
    }
}
