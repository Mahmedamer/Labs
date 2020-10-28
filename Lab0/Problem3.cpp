#include<iostream>
using namespace std;
#define n 5
int main() {
	int arr[n] = {2,6,1,3,7};
	int I, T, J;
	for (I = 1; I < n; I++) {
		T = arr[I];
		for (J = I; J > 0; J--) {
			if (arr[J - 1] >= T)
				break;
			arr[J] = arr[J - 1];
		}
		arr[J] = T;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
}