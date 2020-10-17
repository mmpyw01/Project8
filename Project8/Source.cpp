#include<stdio.h>
int main()
{
	int num[5],i,j,temp;
	printf("Enter 5 number : ");
	scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

	printf("Result = ");
	for (i = 0; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (num[j] < num[i]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
		printf("%d ", num[i]);
	}
}