#include <iostream>
#include <Windows.h>
#include <Vector>
using namespace std;

int main() {
	int ni, no, NI = 15, NO = 10, k, n, capacity=200, lost=0;
	float time = 0;
	vector <int> queue;
	while (time < 120) {
		ni = 1 + rand() % NI;
		no = 1 + rand() % NO;
		k = ni; n = no;
		if (capacity < queue.size() + k) {
			lost += int(queue.size()) + k - capacity;
			k = capacity - queue.size();
		}
		for (int i = 0; i < k; i++) {
			queue.push_back(rand() % 100);
			cout << queue[queue.size() - 1] << " in " << queue.size() << endl;
		}
		for (int i = 0; i < n; i++) {
			if (queue.size() <= 0) continue;
			cout << queue[0] << " out " << queue.size() << endl;
			queue.erase(queue.begin());
		}
		Sleep(1000);
		time++;
	}
	return 123;
}
