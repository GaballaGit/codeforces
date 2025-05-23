#include <iostream>
#include <cmath>

int main()
{
	long long n;
	std::cin >> n;
	long long ans = 5;
	for(int i = 1; i < n; i++)
	{
		ans = ans * 5;
	}
	std::cout << ans << std::endl;
	return 0;
}

	
