#include <iostream>
#include <string>
#include <cctype>

int main(int av, char **ag)
{
	int i;
	int j;

	if (av < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (ag[i])
		{
			j = 0;
			while (ag[i][j])
			{
				std::cout << (char)std::toupper(ag[i][j]);
				j++;
			}
			i++;
			if (ag[i])
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return 0;
}
