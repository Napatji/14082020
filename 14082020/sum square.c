#include<stdio.h>
#include<math.h>
int main()
{
	int sum2 = 0;
	int sum1 = 0;
	
	for (int i = 1,square1; i <= 100; ++i)
	{
		square1 = i * i;
		printf("%d\n", square1);
		sum1 += square1;
	}
	
	printf("--------------------------------\n");

	for (int m=1, square2, sum = 0; m <= 100; ++m)
	{
		sum += m;
		printf("%d\n", m);
		printf("Sum is %d\n", sum);
		sum2 = sum * sum;
	}
	int SUM = sum2 - sum1;
	printf("--------------------------------\n");
	printf("sum1 is %d\n", sum1);
	printf("sum2 is %d\n", sum2);
	printf("SUM is %d", SUM);
	
	return 0;
}