#include <iostream>
using namespace std;

class Account {
	int balance;
	string name;
public:
	Account() {
		this->balance = balance;
		this->name = name;
	}
	Account(int balance, string name) {
		this->balance = balance;
		this->name = name;
	}
	void setBal(int balance) {
		this->balance = balance;
	}
	void setName(string name) {
		this->name = name;
	}
	int getBal() {
		return balance;
	}
	string getName() {
		return name;
	}
	void getinformation() {
		cout << "ÀÜ¾×: " << getBal() << ", ÀÌ¸§:" << getName() << endl;
	}
};

int main() {
	Account anc1(40,"Kang");
	anc1.getBal();
	anc1.getName();
	anc1.getinformation();
}