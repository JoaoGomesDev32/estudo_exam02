unsigned int gcd(unsigned int a, unsigned int b)
{
	while (b)
	{
		unsigned int tmp = b;
		b = a % b;
		a = tmp;
	}
	return (a);
}

unsigned int lcm(unsigned int a, unsigned int b)
{
	if (!a || !b)
		return (0);
	return ((a * b) / gcd(a, b));
}
