int findLength(int arr[], int n)
{
    int i, j;
    int count = 0;

    // Traverse through all elements
    for (i = 0; i < n; i++)
    {
        // Check if arr[i] is distinct
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }

        // If distinct, increment count
        if ((j == i))
        {
            count++;
        }
    }

    // Return the length of the final array
    return count;
}