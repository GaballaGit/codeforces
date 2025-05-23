#include <iostream>

long long findMin(long long n, long long m, long long a)
{
	long long flagN = (n+a-1) / a;
	long long flagM = (m+a-1) / a;

	return flagN * flagM;

}

int main()
{
	//n, m, and a
	//square size nxm
	//pavement a x a
	//least number of flagstones needed to pave square?
	//Allowed to cover the surface larger than the square
	long long m, n, a;
	std::cin >> m >> n >> a;
	std::cout << findMin(n,m,a) << std::endl;
	return 0;
}
