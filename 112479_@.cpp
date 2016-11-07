#include <iostream>

using namespace std;


int main(){

	bool used[10];

	for(int i = 0; i <=9; ++i){
		used[i] = false;
	}	

	for(int i =0; i < str.length(); ++i){
		int x  = int(str[i]) - 48;
		if(x >= 0 && x <= 9){
			used[x] = true;
		}
	}

	int cnt = 0;

	for(int i = 9; i>=0;--i){
		if(!used[i]){
			cout << i;
			cnt++;
		}
	}

	if(cnt == 0){
		cout << "NO";
	}



	return 0;
}