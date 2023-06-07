#include "sprint4.h"

int main() {
	int time = 0, a = 0, Max = 0;
	float b = 0;
	queue* aa;
	aa = new queue(30, 10, 200);
	int NofPackets[120] = {};
	ofstream xx("data4.txt");
	while (time < 120) {
		aa->put_in();
		aa->put_out();
		NofPackets[a] = aa->q.size();
		xx << NofPackets[a] << endl;
		Sleep(1000);
		b += int(NofPackets[a]);
		a++;
		time++;
	}
	for (int i = 0; i < 120; i++) {
		if (NofPackets[i] > Max) {
			Max = NofPackets[i];
		}
	}
	b = b / 120;
	cout << "Average: " << b << endl;
	cout << "Maximum: " << Max << endl;
	cout << "Lost: " << aa->lost << endl;
	xx.close();
	return 123;
}
