#include<iostream>
using namespace std;

int * selectionSort(int arr[], int n);
void swap(int *arr, int a, int b);

int main(){
	int smth[] = {12,2,3,6,3,2};
	int n = 6;

	int *ptr;
	ptr = selectionSort(smth,n);
	while(n>0){
		cout<<*ptr<<endl;
		ptr++;
		n--;
	}
}

int * selectionSort(int arr[], int n){
	int i,j;

	for(i=0; i<n-1; i++){
		int min = arr[i];
		int pos = i;
		for(j=i; j<n; j++){
			if(min>arr[j]){
				min = arr[j];
				pos = j;
			}
		}
		if(pos!=i){
			swap(arr,i,pos);
		}
	}

	return arr;
}

void swap(int *arr, int a, int b){
	int temp = *(arr+a);
	*(arr+a) = *(arr+b);
	*(arr+b) = temp;
}