#include <stdio.h>
int main() {
	int id, ver, stat, sum;
	scanf("%d %x %o" , &id, &ver, &stat);
	sum = id + ver + stat;
	printf("UNIT_ID: %d\n" , id);
	printf("UNIT_VERSION: %d\n" , ver);
	printf("UNIT_STATUS: %d\n" , stat);
	printf("SUM: %d\n" , sum);
	return 0;
}
