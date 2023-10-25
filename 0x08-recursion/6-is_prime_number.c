#include "main.h"
/**
 * evaluate_num -it is the recursion loop.
 * @num: it is the number.
 * @iterator:this is the  nuber to iterate.
 * Return: success.
 */
int evaluate_num(int num, int iterator)
{
	if (iterator == num - 1)
	{
		return (1);
	}

	else if (num % iterator == 0)
	{
		return (0);
	}

	if (num % iterator != 0)
	{
		return (evaluate_num(num, iterator + 1));
	}

	return (0);
}
/**
 * is_prime_number-it will evaluate prime or not prime.
 * @num: nuber.
 * Return:it will return 1if  prime and return 0 if not prime nuber.
 */
int is_prime_number(int num)
{
	int iterator;

	iterator = 2;

	/* only greater than 2*/
	if (num < 2)
	{
		return (0);
	}

	if (num == 2)
	{
		return (1);
	}

	return (evaluate_num(num, iterator));
}
