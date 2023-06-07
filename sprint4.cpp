#include "sprint4.h"

int main() {
	int time = 0, a = 0;
	queue* aa;
	aa = new queue(15, 10, 200);
	int NofPackets[120] = {};
	ofstream xx("data4.txt");
	while (time < 120) {
		aa->put_in();
		aa->put_out();
		NofPackets[a] = aa->q.size();
		xx << NofPackets[a] << endl;
		Sleep(1000);
		a++;
		time++;
	}
	xx.close();
	return 123;
}
