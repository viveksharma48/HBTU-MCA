#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	printf("Enter a number to multiply with 2 \n");
	scanf("%d",&num);
	printf("The result is %d\n",num<<1 );
	return 0;
}