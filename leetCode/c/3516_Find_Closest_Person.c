/**
 *@Author: Amir W. Fathy
 *@AKA: darkstar0x714
 *@Create Time: 2026-05-12 20:34:38
 *@link:  https://leetcode.com/problems/find-closest-person
 */

int findClosest(int x, int y, int z)
{

    int answer = 0;

    if (abs(z - x) > abs(z - y))
    {
        answer = 2;
    }
    else if (abs(z - x) < abs(z - y))
    {
        answer = 1;
    }
    return answer;
}