#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y, mini, maxi;
	x = rand() % 6;
	y = rand() % 6;
	if (x > y) {
		mini = x;
		maxi = y;
	} else {
		maxi = x;
		mini = y;
	}
	if (x + y == 11)
		printf("Dau cu zaru %d %d n-am nevoie de servici", maxi, mini);
	else if (x + y == 12)
		printf("Dau cu zaru 6 6 ca mine nu se mai naste");
	else
		printf("Dau cu zaru %d %d", x, y);

	return 0;
}
