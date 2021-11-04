#include<iostream>
using namespace std;

int * bubbleSort(int arr[], int n);

int main(){
	int smth[] = {12,2,3,6,3,2};
	int n = 6;
	int *ptr;
	ptr = bubbleSort(smth,n);
	while(n>0){
		cout<<*ptr<<endl;
		ptr++;
		n--;
	}
}

int * bubbleSort(int *arr, int n){
	
	for(int i = n; i>1; i--){
		for(int j = 0; j<i-1; j++){
			if(*(arr+j+1)<*(arr + j)){
				int temp = *(arr+j+1);
				*(arr+j+1) = *(arr+j);
				*(arr+j) = temp;
			}
		}
	}
	return arr;
}