/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-21 14:21:45
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/1095/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

int main()
{
    char encryptedMassage[59] = {0}, decryptedMassage[59] = {0};
    int stringLen;

    scanf("%d", &stringLen);

    scanf("%s", encryptedMassage);

    int counter = 1;
    int index = 0;
    for (int i = 0; i < stringLen;)
    {
        decryptedMassage[index] = encryptedMassage[i];
        counter++;
        index++;
        i = i + counter;
    }
    printf("%s", decryptedMassage);
}