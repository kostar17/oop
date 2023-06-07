#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>
using namespace std;

class queue {
public:
	queue() {
		NI = 0; NO = 0; capacity = 100;
	}
	queue(int p, int q, int r) {
		NI = p; NO = q; capacity = r;
	}

	int NI, NO, capacity, lost = 0, a = 0;
	vector <int> q;
	int NofPackets[120] = {};

	void put_in() {
		int k = rand() % NI;
		if (capacity < q.size() + k) {
			lost += int(q.size()) + k - capacity;
			k = capacity - q.size();
		}
		for (int i = 0; i < k; i++) {
			q.push_back(rand() % 100);
		}
	}
	void put_out() {
		int n = rand() % NO;
		for (int i = 0; i < n; i++) {
			if (q.size() <= 0) continue;
			q.erase(q.begin());
		}
	}
};
