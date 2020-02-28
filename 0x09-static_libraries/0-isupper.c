/**
 * _isupper - check the upper case.
 * @c: is a variable in case to evaluate
 * Return: Always 0.
 */
int _isupper(int c)
{
	int res;

	if ((c >= 'A') && (c <= 'Z'))
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
}
