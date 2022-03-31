#include<iostream>
#include<stdlib.h>
using namespace std;

int biSearch(int r[],int low,int high,int key){
	int mid;
	if(low <= high){
		mid = (low + high) / 2;
		if(key == r[mid])
			return mid;
		else if(key < r[mid])
			return biSearch(r,low,mid -1,key);
		else
			return biSearch(r,mid + 1,high,key);
	}
	return -1;
}

int main(){
	int a;
	int c[] = {1,3,5,6,8,9,13,35,36,45,57,76,88};
	cout << "Please enter the keyword to search:\n";
	cin >> a;
	int length = sizeof(c)/sizeof(c[0]);
	int num = biSearch(c,0,length,a);
	if(num != -1)
		cout << "Find this number: " << c[num] << " which is the " << num << " digit." << endl;
	else
		cout << "Is not the number!" << endl;
	return 0;
}
