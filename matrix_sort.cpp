#include <iostream>
#include <algorithm>
using namespace std;

void m_sort(int data[][100], int m, int n, int order) {
	// matrix to array
	int array[m * n];
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			array[i * n + j] = data[i][j];
		}
	}

	sort(array, array + m * n);

	if(order == 1){
		reverse(array, array + m * n);
		cout<<"The sorted matrix in the non-increasing order: "<<endl;
	} else {
		cout<<"The sorted matrix in the non-decreasing order: "<<endl;
	}

	for(int i = 0; i < m * n; i++) {
		if(i != 0 && i % n == 0) {
			cout<<endl;
		}
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

void ms_sort(int data[][100], int m, int n, int order) {
	// matrix to array
	int array[m * n];
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			array[i * n + j] = data[i][j];
		}
	}

	sort(array, array + m * n);

	if(order == 1){
		reverse(array, array + m * n);
		cout<<"The sorted matrix in the non-increasing order: "<<endl;
	} else {
		cout<<"The sorted matrix in the non-decreasing order: "<<endl;
	}
	for(int i = 0; i < m; i++) {
		if(i % 2 == 0) {
			for(int j = 0; j < n; j++) {
				cout<<array[i * n + j]<<" ";
			}
		} else {
			for(int j = n - 1; j >= 0; j--) {
				cout<<array[i * n + j]<<" ";
			}
		}
		
		cout<<endl;
	}
}

int main() {

	int m, n;
	int matrix[100][100];
	int style, order;

	cout<<"Please input n and m: ";
	cin>>m>>n;

	cout<<"Please input the distinct of matrix "<<m<<"*"<<n<<" by row major:"<<endl;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cin>>matrix[i][j];
		}
	}

	cout<<"Select sorted style: 1) top-down-left-right, 2) snake-like (<ctrl>-d to exit): ";
	cin>>style;

	cout<<"Select sorted order: 1) non-increasing order, 2) non-decreasing order (<ctrl>-d to exit): ";
	cin>>order;

	if(style == 1) {
		m_sort(matrix, m, n, order);
	} else if(style == 2) {
		ms_sort(matrix, m, n, order);
	}
	
	
	return 0;
}