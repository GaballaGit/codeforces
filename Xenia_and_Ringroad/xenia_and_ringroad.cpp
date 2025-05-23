#include <iostream>
#include <queue>

int main(){
	int h;
	int j;
	std::queue<int> tasks;
	std::cin >> h >> j;
	int x;
	for (int i = 0; i < j; i++) {
		std::cin >> x;
		tasks.push(x);
	}

	int cur = 1;
	int count = 0;
	while (!(tasks.empty())) {
		if (tasks.front() == cur) {
			tasks.pop();
			continue;
		}
		cur = (cur % h) + 1;
		count++;
	}

	std::cout << count;
}
