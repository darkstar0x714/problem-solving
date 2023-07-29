/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-29 13:31:53
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/877/A
 * @ tags:  implementation - strings
 * @ Problem Level:  *1100
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    int status = 0;
    int count = 0;
    char *names[] = {"Danil", "Olya", "Slava", "Ann", "Nikita"};
    const int names_num = 5;

    if (fgets(str, 100, stdin) != NULL)
    {
        for (int i = 0; i < names_num; i++)
        {
            char *test = str;
            while (test = strstr(test, names[i]))
            {
                // printf("DDD %s\n", names[i]);
                count++;
                test += strlen(names[i]);
            }
        }
    }

    if (count == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}