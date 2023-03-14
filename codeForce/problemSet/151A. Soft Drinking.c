/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-14 20:10:44
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/151/A
 * @ tags:  math - implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>

#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))

int main()
{
    int numberOfFriends, numberOfBottles, numberOfMLPerBottle, numberOfLimes, numberOfSlicesPerLime, numberOfGramsOfSalts, mLPerToast, gramOfSaltPerToast;

    scanf("%d%d%d%d%d%d%d%d", &numberOfFriends, &numberOfBottles, &numberOfMLPerBottle, &numberOfLimes, &numberOfSlicesPerLime, &numberOfGramsOfSalts, &mLPerToast, &gramOfSaltPerToast);

    int toastsFromDrink = (numberOfBottles * numberOfMLPerBottle) / mLPerToast;
    int toastsFromSalt = (numberOfGramsOfSalts) / gramOfSaltPerToast;
    int toastsFromMeat = (numberOfLimes * numberOfSlicesPerLime) / 1;

    int minToastsForAllFriends = MIN(MIN(toastsFromDrink, toastsFromSalt), toastsFromMeat);

    printf("%d", minToastsForAllFriends / numberOfFriends);
}