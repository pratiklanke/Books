#include<iostream>
#include"book.h"
using namespace std;
class TestBook{
	int main(){
		Book b1(101,"Java",1500);
		b1.getId();
		b1.getName();
		b1.getPrice();
		cout << b1.getId() << b1.getName() << b1.getPrice() << endl;
	}
};
