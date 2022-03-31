#include<iostream>
#include<stdlib.h>
using namespace std;
int biSearch(int r[],int low,int high,int key){
	int mid;
	while(low <= high){
		mid = (low + high) / 2;
		if(key == r[mid])
			return mid;
		else if(key < r[mid])
			high = mid -1;
		else
			low = mid + 1;
	}
	return -1;
}

int main(){
	int a;
	int c[] = {1,4,6,14,24,32,56,65,66,76,87,89,98};
	cout << "Please enter the keyword to search:\n";
	cin >> a;
	int length = sizeof(c)/sizeof(c[0]);
	int num = biSearch(c,0,length,a);
	if(num != -1)
		cout << "Find this number: " << c[num] << " which is the " << num << " digit" << endl;
	else
		cout << "Is not the number!" << endl;
	return 0;
}
