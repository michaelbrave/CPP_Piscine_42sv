#include "initialize.hpp"

void	*serialize(void)
{
	Data *b = new Data;
	char str1[9];
	char str2[9];

	srand(time(nullptr));
	static const char alphnum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	for (int i = 0;i < 8;i++)
	{
		str1[i] = alphnum[rand() % 61];
		str2[i] = alphnum[rand() % 61];
	}
	str1[8] = '\0';
	str2[8] = '\0';
	b->n = rand();
	b->s1.assign(str1);
	b->s2.assign(str2);
	std::cout << "pre s1: " << b->s1 << std::endl;
	std::cout << "pre  n: " << b->n  << std::endl;
	std::cout << "pre s2: " << b->s2 << std::endl;
	return (reinterpret_cast<void*>(b));
}

Data	*deserialize(void *raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	void *thing;
	Data *b;

	thing = serialize();
	b = deserialize(thing);

	std::cout << "s1: " << b->s1 << std::endl;
	std::cout << " n: " << b->n << std::endl;
	std::cout << "s2: " << b->s2 << std::endl;
	return (0);
}