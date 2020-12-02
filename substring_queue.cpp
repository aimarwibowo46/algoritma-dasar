#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	
	// string kalimat = "Budi suka makan nasi goreng";
	string kalimat;
	getline(cin, kalimat);

	queue<string> substring;

	int temp = 0;
	for(int i = 0; i != kalimat.length(); i++) {
		if(kalimat[i] == ' ') {
			substring.push(kalimat.substr(temp, i-temp));
			temp = i+1;	
		}
	}
	substring.push(kalimat.substr(temp, kalimat.length()-1));

	// menampilkan isi dari queue
	while(!substring.empty()) { 
		cout << substring.front() << endl;
		substring.pop();
	}
	
	return 0;
}