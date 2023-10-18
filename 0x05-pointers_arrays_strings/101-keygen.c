#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0
 */

int main(void)

{
	char password[84];
	int index = 0;
	int sum = 0;
	int diff;
	int change;

	srand(time(0));

	while (sum < 2772)

	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)

	{
		diff = (sum - 2772) / 2;
		change = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			diff++;

		for (index = 0 ; password[index] ; index++)

		{
			if (password[index] >= (33 + diff))

			{
				password[index] -= diff;
				break;
			}
		}

		for (index = 0 ; password[index] ; index++)

		{
			if (password[index] >= (33 + change))

			{
				password[index] -= change;
				break;
			}
		}
	}

	printf("%s", password);
	return (0);
}
