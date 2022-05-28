/* Storage Class Examples */
#include<stdio.h>
void increment()
{
	static int m=1;
	printf("%d ",m);
	m++;
}
int main()
{
	increment();
	increment();
	increment();
	return 0;
}