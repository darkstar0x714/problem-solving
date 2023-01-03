/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-02 22:02:46
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/236/problem/A
 * @ tags: brute force - strings - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    char inputName[101] = {0}, filteredInput[101] = {0};
    int counter = 0;
    scanf("%s", &inputName);
    for (int i = 0; i < sizeof(inputName); i++)
    {
        // put ascii code as a index of filtered array
        // and number of counter is non zero element of array
        if (inputName[i] != filteredInput[inputName[i]])
        {
            filteredInput[inputName[i]] = inputName[i];
            counter++;
        }
    }
    if (counter % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
}