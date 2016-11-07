#include <iostream>
#include <set>


using namespace std;

set<char> not_appeared;
string str;
string str2;
set<char>::iterator it;


char tolwr(char c){
	int res = int(c);

	if(res >= 97 && res <=123) return c;
	res = res + 32;

	return char(res);
}

char toupr(char c){
	int res = int(c);

	if(res >= 65 && res <=91) return c;
	res = res - 32;

	return char(res);
}

void fill_not_appeared_set(){
	for(int i = 0; i <= 25; ++i){
		char x = char(int('a') + i);
		not_appeared.insert(x);
	}	
}

void erase_appeared_chars(string x){
	for(int i = 0; i < x.length(); ++i){
		if(isalpha(x[i])){
			it = not_appeared.find(char(tolower(x[i])));
			if(it != not_appeared.end()){
				not_appeared.erase(it);
			}
		}
	}
}

void output_not_appeared_set(){
	if(!not_appeared.empty()){
		for(it = not_appeared.begin(); it != not_appeared.end(); ++it){
			cout << char(toupper(*it));
		}
	}else{
		cout << "NO";
	}
}

int main(){

	fill_not_appeared_set();//a-z

	getline(cin,str);
	getline(cin,str2);
	
	string text = str + str2;
	erase_appeared_chars(text);

	output_not_appeared_set();

	return 0;
}