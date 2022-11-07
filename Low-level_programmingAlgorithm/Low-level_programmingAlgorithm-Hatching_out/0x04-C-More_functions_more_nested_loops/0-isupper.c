/**
 * _isupper - upper
 * @c: number
 * Return: 0
 */

int _isupper(int c)
{
	int res;

	if (c >= 'A' && c <= 'Z')
		res = 1;
	else if (c <= 'a' && c <= 'z')
		res = 0;
	return (res);
}
