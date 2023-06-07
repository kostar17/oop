#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> queue;
	int ni=10, no=10;
	for (int i = 0; i < ni; i++) {
		queue.push_back(rand() % 100);
		cout << queue[queue.size() - 1] << " in " << queue.size() << endl;
	}
	for (int i = 0; i < no; i++) {
		if (queue.size() <= 0) continue;
		cout << queue[0] << " out " << queue.size() << endl;
		queue.erase(queue.begin());
	}
	return 123;
}
