/**
 * _isdigit - check the upper case.
 * @c: is a variable in case to evaluate
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int res;

	if ((c >= '0') && (c <= '9'))
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
}
