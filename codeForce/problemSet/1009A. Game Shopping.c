/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-29 10:45:26
 * @ Known as: DarkStar0x714
 * @ link:  https://codeforces.com/contest/1009/problem/A
 * @ tags:  implementation
 * @ Problem Level:  *800
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void) {
	int n, m;
	scanf("%d%d", &n, &m);
 
	int costs[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &costs[i]);
	}
	int bills[m];
	for (int i = 0; i < m; i++) {
		scanf("%d", &bills[i]);
	}
 
	int bill = 0, cnt = 0;
	for (int i = 0; i < n && bill < m; i++) {
		if (costs[i] <= bills[bill]) {
			bill++;
			cnt++;
		}
	}
 
	printf("%d\n", cnt);
}