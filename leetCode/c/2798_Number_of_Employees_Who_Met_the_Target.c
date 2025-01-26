/**
 * @ Author: Amir W. Fathy
 * @ AKA: darkstar0x714
 * @ Create Time: 2025-01-26 12:28:09
 * @ link: https://leetcode.com/problems/number-of-employees-who-met-the-target/?envType=problem-list-v2&envId=2x67ey73
 */

int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {

    int succesfulWorkers=0;

    for (int index=0;index<hoursSize;index++)
    {
        if(hours[index]>=target)
        {
            succesfulWorkers++;
        }
    }
    return succesfulWorkers;
}