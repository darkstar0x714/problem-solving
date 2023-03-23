/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-23 15:34:35
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/63/A
 * @ tags:  strings - implementation - sorting
 * @ Problem Level:  *900
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int numberOfPassengers;
    int ratIndex = 0, womanIndex = 0, manIndex = 0, captinIndex = 0;
    char womanAndChild[100][100] = {0}, rats[100][100] = {0}, mens[100][100] = {0}, captin[100][100] = {0};
    char name[1000] = {0};
    char gender[20] = {0};
    scanf("%d", &numberOfPassengers);

    for (int i = 0; i < numberOfPassengers; i++)
    {
        scanf("%s", name);
        scanf("%s", gender);

        if (strcmp("captain", gender) == 0)
        {
            strcpy(captin[captinIndex], name);
            captinIndex++;
        }
        else if (strcmp("rat", gender) == 0)
        {
            strcpy(rats[ratIndex], name);
            ratIndex++;
        }
        else if ((strcmp("woman", gender) == 0) || (strcmp("child", gender) == 0))
        {
            strcpy(womanAndChild[womanIndex], name);
            womanIndex++;
        }
        else if (strcmp("man", gender) == 0)
        {
            strcpy(mens[manIndex], name);
            manIndex++;
        }
    }

    for (int i = 0; i < ratIndex; i++)
    {
        printf("%s\n", rats[i]);
    }

    for (int i = 0; i < womanIndex; i++)
    {
        printf("%s\n", womanAndChild[i]);
    }

    for (int i = 0; i < manIndex; i++)
    {
        printf("%s\n", mens[i]);
    }

    for (int i = 0; i < captinIndex; i++)
    {
        printf("%s\n", captin);
    }
}