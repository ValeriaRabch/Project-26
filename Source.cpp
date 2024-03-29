#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class String {
	char* line;
	int size;

public:
	String() {
		size = 80;
		line = new char[size];
	}
	String(int size) {
		this->size = size;
		line = new char[size];
	}
	String( char* arr) {
		size = strlen(arr);
		line = new char[size];
		strcpy(line, arr);
	}
	String(String& arr) {
		size = arr.size;
		line = new char[size];
		for (int i = 0; i < size; i++) {
			line[i] = arr.line[i];
		}
		
	}
	~String() {
		if (line != nullptr) {
			delete[] line;
		}
	}
	void SetLine() {
		for (int i = 0; i < size; i++) {
			cin >> line[i];
		}
	}
	void Print() {
		for (int i = 0; i < size; i++) {
			cout << line[i];
		}
	}
};


int main() {
	String arr(5);

	cout << "Enter ";
	arr.SetLine();

	arr.Print();
	cout << endl;
	String a(arr);

	a.Print();
	return 0;
}