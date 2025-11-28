#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x, y, mini, maxi;
	srand(time(NULL));
	x = rand() % 6 + 1;
	y = rand() % 6 + 1;
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
