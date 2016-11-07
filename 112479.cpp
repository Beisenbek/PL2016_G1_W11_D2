#include <iostream>
#include <set>
#define set<int>::reverse_iterator siri
#define set<int>::iterator sii

using namespace std;


int main(){

	set<int> not_appeared;

	for(int i = 0; i <= 9; ++i){
		not_appeared.insert(i);
	}	

	string str;
	getline(cin,str);

	for(int i =0; i < str.length(); ++i){
		int x  = int(str[i]) - 48;
		if(x >= 0 && x <= 9){
			sii i = not_appeared.find(x);
			if(i!=not_appeared.end()){
				not_appeared.erase(i);
			}
		}
	}

	if(!not_appeared.empty()){
		for(siri i = not_appeared.rbegin(); i != not_appeared.rend(); ++i){
			cout << *i;
		}
	}else{
		cout << "NO";
	}


	return 0;
}