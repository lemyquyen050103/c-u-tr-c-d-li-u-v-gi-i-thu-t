#include<iostream>
using namespace std;
float  tong_duong(float arr[],int n){
 if (n == 0) 
        return 0;
    
    if (arr[0] > 0) 
	return arr[0]+tong_duong(arr+1,n-1);
	else
	return tong_duong(arr+1,n-1);
}
int main(){
	float arr[]={1,2,3,-5,-7,9.9,-9};
	int n=sizeof(arr)/sizeof(arr[0]);
	float  tong=tong_duong(arr,n);
	cout<<"tong cac so duong co trong mang so thuc la:"<<tong<<endl;
	return 0;
}