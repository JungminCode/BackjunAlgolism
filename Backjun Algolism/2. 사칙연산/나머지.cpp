#include <stdio.h>

int main()
{
	int a, b, c;
	// 편의성을 위해 추가
	int one = 0, two = 0, three = 0, four = 0;
	scanf("%d %d %d", &a, &b, &c);
	one = (a + b) % c;
	two = (a % c + b % c) % c;
	three = (a * b) % c;
	four = (a % c * b % c) % c;
	printf("%d\n%d\n%d\n%d", one, two, three, four);
	return 0;
}