#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

int main(){
	int a;
	bool b = false;
	int c[10] = {1,2,3,6,4,88,65,23,13,43};
	int c1[] = {1,2,3,6,4,88,65,23,13,43};
	int length = sizeof(c)/sizeof(c[0]);
	cout << "please enter the keyword to search:\n";
	cin >> a;

	for(int i = 0;i < length;++i){
		if(a == c[i]){
			cout << "nice,This is " << i << " number is " << c[i] << endl;
			b = true;
			continue;
		}else{
			cout << setw(7) << i << setw(13) << c[i] << endl;
		}
	}
	if(b == false)
		cout << "Is not the number!" << endl;
	//linux下shell里pause不再是一条命令，所以会报错not found
	//可修改为system("read");或者getchar();区别在于pause是输入任意键，这两个则只接收回车
	//system("pause");
	return 0;
}
