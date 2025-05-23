#include <iostream>
#include <vector>
int main(){
	int h;
	int j;
	std::vector<int> tasks;
	std::cin >> h >> j;
	int x;
	for (int i = 0; i < j; i++) {
		std::cin >> x;
		tasks.push_back(x);
	}

	long long cur = 1;
	long long count = 0;
	for (int i = 0; i < tasks.size(); i++) {
		//std::cout << cur << "->" << tasks[i] << " " << count << std::endl;
		if (cur > tasks[i]) {
			//std::cout << ((h + 1) - cur + (tasks[i]-1)) << std::endl;
      			count += ((h + 1) - cur + (tasks[i]-1));
			cur = tasks[i];
		}
		else {
      			count += (tasks[i] - cur);
			cur = tasks[i];
		}
	}
	std::cout << count;
}
