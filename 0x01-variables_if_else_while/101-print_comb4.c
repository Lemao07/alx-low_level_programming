#include <stdio.h>



/**
 *
 *   * main - Prints 3 combination of numbers
 *
 *     *
 *
 *       * Return: Always (Success)
 *
 *         */

int main(void)

{
<<<<<<< HEAD

		int c, i, k;



			for (c = '0'; c <= '9'; c++)

					{

								for (i = '0'; i <= '9'; i++)

											{

															for (k = '0'; k <= '9'; k++)

																			{

																								if (c < i && i < k)

																													{

																																			putchar(c);

																																								putchar(i);

																																													putchar(k);



																																																		if (c != '7')

																																																								{

																																																															putchar(',');

																																																																					putchar(' ');

																																																																										}

																																																						}

																											}

																	}

									}



				putchar('\n');



					return (0);

=======
	int c, i, k;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (c < i && i < k)
				{
					putchar(c);
					putchar(i);
					putchar(k);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
>>>>>>> 7ae77597b84020e1bbe92a85920caf9f063d2028
}


