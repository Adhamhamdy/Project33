#include<iostream>
using namespace std;
int subsequences(string str, string output[]) {
	if (str.length() == 0) {
		output[0]= "";
		return 1;
	}
	int smallerOutputSize = subsequences(str.substr(1), output);
	for (int i = 0;i < smallerOutputSize;i++) {
		output[i + smallerOutputSize] = str[0] + output[i];
	}
	return 2 * smallerOutputSize;
}
int main() {
	string output[1000];
	int outputsize = subsequences("abc", output);
	for (int i = 0;i < outputsize;i++) {
		cout << output[i] << endl;
	}
}