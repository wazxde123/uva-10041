#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, people, i, j, x, tmp, half, newadd;
	int total = 0;
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		scanf("%d", &people);
		int address[30000];
		for (j = 0; j < people; j++) {
			scanf("%d", &address[j]);

		}
		for (j = 0; j < people; j++) {				//排序
			for (x = j + 1; x < people; x++) {
				if (address[j]>address[x]) {
					tmp = address[j];
					address[j] = address[x];
					address[x] = tmp;
				}
			}
		}	
		half = people / 2;							//取中位數
		newadd = address[half];					  
		for (j = 0; j < people; j++) {
			total = total + abs(newadd - address[j]);
		}
		printf("%d\n", total);
		total = 0;

	}
	return 0;
}

