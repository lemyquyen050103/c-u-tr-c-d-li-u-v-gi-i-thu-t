#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
	for(int i=0; i<n-1;i++){
			int minIndex= i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minIndex]){
			minIndex = j;}
		}
		int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
	}
}
int main(){
	int arr[] = {41, 23, 4, 14, 56, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
	return 0;
}