#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubblesort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (a[j] > a[j - 1]) {
                swap(a[j], a[j - 1]); 
            }
        }
    }
}
void selectionsort( int a[], int n ){
	for (int i = 0 ; i < n ; i ++){
		int i = min ;
		for (int j = i +1 ; j < n ; j ++){
			if ( a[i] > a[j]  ){
				a[min] = a[j] ;
			}
			swap ( min , a[i]); 
		}
	}
}

void SelectionSort(int a[], int n)
{
	int min; // ch? s? ph?n t? nh? nh?t trong dãy hi?n hành
	for (int  i = 0; i < n - 1; i++){
		min = i; 
		for(int j = i + 1; j < n; j++)
	   	   if (a[j] < a[min])
		       min = j; // ghi nh?n v? trí ph?n t? nh? nh?t
		if (min != i)
	   	   swap(a[min], a[i]);
	}
}
void duyet( int a[], int n  ){
	for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}


int main() {
    int n;
    cin >> n; 
    int a[n]; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
//    bubblesort(a, n);
    selectionsort(a , n );
    duyet (a, n );
    delete[] a; 
    return 0;
}

