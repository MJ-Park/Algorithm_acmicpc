#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, X;
	cin >> N >> X;

	int *A = new int[N];

	for (int i=0; i<N; i++)
		cin >> A[i];

	for (int i=0; i<N; i++)
		if(A[i] < X) cout << A[i] << " ";

	return 0;
}
