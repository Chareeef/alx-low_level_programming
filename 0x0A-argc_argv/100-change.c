#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print the minimum number of coins to make change of money,
 * We can use an unlimited number of coins of values 25,10, 5, 2 and 1 cents.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if Error, Succes otherwise.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int money, coins = 0;

	if (argv[1] == NULL || argv[2] != NULL)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	if (money < 0)
		printf("0\n");

	if (money / 25 > 0)
	{
		coins += money / 25;
		money %= 25;
	}
	if (money / 10 > 0)
	{
		coins += money / 10;
		money %= 10;
	}
	if (money / 5 > 0)
	{
		coins += money / 5;
		money %= 5;
	}
	if (money / 2 > 0)
	{
		coins += money / 2;
		money %= 2;
	}
	if (money == 1)
	{
		coins += 1;
		money = 0;
	}
	printf("%d\n", coins);
	return (EXIT_SUCCESS);
}
