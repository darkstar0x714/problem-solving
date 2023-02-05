/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-05 21:28:51
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/474/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *900
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char shift_direction;
    char message[101];
    char keyboard[30] = "qwertyuiopasdfghjkl;zxcvbnm,./";

    scanf(" %c", &shift_direction);
    scanf("%s", message);

    int i;
    for (i = 0; i < strlen(message); i++)
    {
        for (int j = 0; j < strlen(keyboard); j++)
        {
            if (shift_direction == 'R')
            {
                if (message[i] == keyboard[j])
                {
                    message[i] = keyboard[j - 1];
                    break;
                }
            }
            else
            {
                if (message[i] == keyboard[j])
                {
                    message[i] = keyboard[j + 1];
                    break;
                }
            }
        }
    }

    printf("%s\n", message);

    return 0;
}