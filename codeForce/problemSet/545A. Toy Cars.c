/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-11 21:49:23
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/545/A
 * @ tags:  implementation
 * @ Problem Level:  *900
 */

#include <stdio.h>

int main()
{
    int matrixSize, counter, cars, goodCar[101] = {0};

    scanf("%d", &matrixSize);
    cars = matrixSize;
    int z = 0;
    for (int i = 0; i < matrixSize; i++)
    {
        int flag = 1;
        for (int j = 0; j < matrixSize; j++)
        {
            scanf("%d", &counter);
            if (counter == 3 || counter == 1)
            {
                flag = 0;
            }
        }
        if (flag)
        {
            goodCar[z] = i + 1;
            z++;
        }
    }
    printf("%d\n", z);
    for (int i = 0; i < z; i++)
    {
        printf("%d ", goodCar[i]);
    }
}
