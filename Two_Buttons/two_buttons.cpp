#include <iostream>



int main() {
	int n;
	int m;
	std::cin >> n >> m;
	int count = 0; 

	while (m > n) {
		if (m%2 == 0) {
			m = m / 2;
		}
		else {
			m += 1;
		}
		count++;
	}

	count += (n-m);
	std::cout << count;

}



