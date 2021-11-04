#include<iostream>
using namespace std;

int * insertionSort(int arr[], int n);
void swap(int *arr, int a, int b);

int main(){
	int smth[] = {911,12,2,3,6,3,2};
	int n = 7;

	int *ptr;
	ptr = insertionSort(smth,n);
	while(n>0){
		cout<<*ptr<<endl;
		ptr++;
		n--;
	}
	
}

int * insertionSort(int arr[], int n){
	
	for(int i = 1; i<n; i++){
		for(int j = i-1; j>=0; j--){
			if(arr[j]>arr[i]){
				swap(arr, i, j);
			}
		}
	}
	return arr;
}

void swap(int *arr, int a, int b){
	int temp = *(arr+a);
	*(arr+a) = *(arr+b);
	*(arr+b) = temp;
}