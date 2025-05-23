#include <iostream>
#include <vector>

bool seen(std::vector<char> s, char c)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == c)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	std::string input;
	std::cin >> input;


	std::vector<char> seenChrs;
	int count = 0;

	for (int i = 0; i < input.size(); i++)
	{
		if (seen(seenChrs, input[i]))
		{
			continue;
		}
		else
		{
			count += 1;
			seenChrs.push_back(input[i]);
		}
	}

	if (count % 2 == 0)
	{
		std::cout << "CHAT WITH HER!" << std::endl;
		return 0;
	}
	else
	{
		std::cout << "IGNORE HIM!" << std::endl;
		return 0;
	}

	return 1;

}
