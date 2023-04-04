#include <stdio.h>
#include <time.h>

/**
 * sum - sum the characters
 * @password: the string
 * @i: position
 *
 * Return: The sum
 */
int sum(char *password, int i)
{
	int sum = 0, j;

	for (j = 0; j <= i; j++)
	{
		sum += *password;
		password++;
	}
	return (sum);
}
/**
 * checksum - check if characters sum is 2772
 * @password: the string
 * @i: position
 *
 * Return: 1 if True, 0 if Not
 */
int checksum(char *password, int i)
{
	int sumup = 0;

	sumup = sum(password, i);

	if (sumup == 2772)
		return (1);
	else
		return (0);
}

/**
 * main - Generate random password for crackme (characters sum must be 2772). 
 *
 * Return: the password
 */
char *main(void)
{
	char *password = 0;
	int i = 0;

	srand(time(NULL));
	while (!(checksum(password, i)))
	{
		if (sum(password, i) <= 2772)
		{
			*(password + i) = rand() % 126 + 1;
			i++;
		}
	}

	*(password + i) = '\0';
	printf("%s -> %d", password, sum(password, i));
	return (password);
}

