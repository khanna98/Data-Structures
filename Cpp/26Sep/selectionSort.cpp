#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void selectionSort(int arr[],int n){
	int i,j,min_index;
	for(i=0;i<n-1;i++){
		min_index = i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min_index]){
				min_index=j;
			}
			swap(&arr[min_index],&arr[i]);
		}
	}
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
int main(){
	int arr[] = {8,9,1,4,0,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,n);
	cout<<"Sorted Array : ";
	printArray(arr,n);
	return 0;
}
