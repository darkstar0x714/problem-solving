/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-15 20:36:58
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/867/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    int n;
    char locations[101];
    int sf_count = 0, fs_count = 0;

    scanf("%d", &n);

    scanf("%s", locations);

    for (int i = 0; i < n - 1; i++)
    {
        if (locations[i] == 'S' && locations[i + 1] == 'F')
        {
            sf_count++;
        }
        else if (locations[i] == 'F' && locations[i + 1] == 'S')
        {
            fs_count++;
        }
    }

    if (sf_count > fs_count)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
