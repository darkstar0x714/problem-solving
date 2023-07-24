/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-24 21:48:30
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/499/B
 * @ tags:  implementation - strings
 * @ Problem Level:  *1000
 */

#include <stdio.h>
#include <string.h>

int main()
{
    struct dic
    {
        char firstLang[12];
        char secondLang[12];
    };

    struct dic s1[3002] = {0};

    char lec[3002][12] = {0}, notes[3002][12] = {0};

    int numberOfWordsInLec, numberOfWordsInLang;

    scanf("%d%d", &numberOfWordsInLec, &numberOfWordsInLang);

    for (int i = 0; i < numberOfWordsInLang; i++)
    {
        scanf("%s%s", s1[i].firstLang, s1[i].secondLang);
    }

    for (int i = 0; i < numberOfWordsInLec; i++)
    {
        scanf("%s", lec[i]);
    }
    for (int i = 0; i < numberOfWordsInLec; i++)
    {
        for (int j = 0; j < numberOfWordsInLang; j++)
        {
            if (strcmp(lec[i], s1[j].firstLang) == 0)
            {
                if (strlen(lec[i]) <= strlen(s1[j].secondLang))
                {
                    strcat(notes[i], lec[i]);
                }
                else
                {
                    strcat(notes[i], s1[j].secondLang);
                }
                strcat(notes[i], " ");
                break;
            }
        }
    }
    for (int i = 0; i < numberOfWordsInLec; i++)
    {
        printf("%s", notes[i]);
    }
}