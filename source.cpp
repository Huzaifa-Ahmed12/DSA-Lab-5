#include<iostream>
#include<queue>
using namespace std;
template<class ItemType>
class PQue {
private:
	queue<int>pQ[10];
public:
	PQue();
	bool isEmpty();
	bool isFull();
	void insert(ItemType item, int p);
	void remove(ItemType& items);
};
template<class ItemType>
PQue<ItemType>::PQue() {};
template<class ItemType>
bool PQue<ItemType>::isEmpty() {
	for (int i = 0; i < 10; i++) {
		if (!pQ[i].empty()) {
			return false;
		}
	}
	return true;
}
template<class ItemType>
bool PQue<ItemType>::isFull() {
	return false;
}
template<class ItemType>
void PQue<ItemType>::insert(ItemType item, int p) {
	if (p < 0 || p >= 10) {
		cout << "Invalid Priority Level!!";
		exit(1);
	}
	else {
		pQ[p].push(item);
	}
}
template<class ItemType>
void PQue<ItemType>::remove(ItemType& items) {
	for (int i = 9; i >= 0; i--) {
		if (!pQ[i].empty()) {
			items = pQ[i].front();
			pQ[i].pop();
			return;
			
		}
	}
	cout << "empty queue!!";
}
int main() {
	PQue<int>pq;;
	pq.insert(20, 4);
	pq.insert(10, 6);
	pq.insert(40, 5);
	pq.insert(80, 8);
	int p;
	pq.remove(p);
	cout << p << endl;
	pq.remove(p);
	cout << p << endl;
	pq.remove(p);
	cout << p << endl;
}