/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-07-16 22:46:36
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/problemset/problem/82/A
 * @ tags:  math - implementation
 * @ Problem Level:  *1100
 */

#include <stdio.h>

char s[][9] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

int main()
{
    long long int n;

    scanf("%lld", &n);

    while (n > 5)
        n = n / 2 - 2;

    puts(s[n - 1]);
}

/**  ************************************* Explanation ********************************************************
the expression `n = n/2 - 2` to find the position of the person who drinks the n-th can in the queue. Let's break down the logic behind this expression:

1. Initially, there are 5 people in the queue: Sheldon, Leonard, Penny, Rajesh, and Howard.

2. The first person, Sheldon, drinks a can and doubles, resulting in two Sheldons going to the end of the queue. Now the queue looks like this: Leonard, Penny, Rajesh, Howard, Sheldon, Sheldon.

3. The second person, Leonard, drinks a can and doubles, resulting in two Leonards going to the end of the queue. Now the queue looks like this: Penny, Rajesh, Howard, Sheldon, Sheldon, Leonard, Leonard.

4. The third person, Penny, drinks a can and doubles, resulting in two Pennys going to the end of the queue. Now the queue looks like this: Rajesh, Howard, Sheldon, Sheldon, Leonard, Leonard, Penny, Penny.

5. The process continues as mentioned in the problem statement.

Now, let's observe the pattern:

- After each round of doubling, the queue size becomes twice the previous size.
- The number of cans consumed in each round is equal to the queue size before the doubling.

Now, if we try to find the person who drinks the n-th can, we can use the following logic:

1. If n is less than or equal to 5, then the answer is straightforward, as there are only 5 people in the initial queue.

2. If n is greater than 5, then we need to find which round of doubling the n-th can belongs to and which person's turn it is.

Here's how it works:

- In the first round of doubling, there are 5 cans consumed (Sheldon, Leonard, Penny, Rajesh, Howard). After the first round, there are 10 people in the queue (2 Sheldons, 2 Leonards, 2 Pennys, 2 Rajeshs, 2 Howards).

- In the second round of doubling, there are 10 cans consumed (Sheldon, Sheldon, Leonard, Leonard, Penny, Penny, Rajesh, Rajesh, Howard, Howard). After the second round, there are 20 people in the queue.

- In the third round of doubling, there are 20 cans consumed, and the queue size becomes 40.

As you can see, after each round, the queue size doubles. So, to find the round number, we can use the expression `n / 2`.

Now, we need to find which person's turn it is in that round. For this, we can subtract the total cans consumed in all previous rounds from `n` and use the expression `n = n - (queue_size_before_doubling)`.

Since the queue size before doubling is equal to the queue size in the previous round, we can use `n = n/2 - 2` to find the position of the person who drinks the n-th can in the current queue.

The expression `n = n/2 - 2` essentially calculates the position of the person who drinks the n-th can after considering the doubling rounds.
*/