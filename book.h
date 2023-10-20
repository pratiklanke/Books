#include<iostream>
using namespace std;

class Book{
	private : 
	int id;
	string name;
	double price;
	
	public:
		Book(int id, string name,double price){
			this->id = id;
			this->name = name;
			this->price=price;
		}
		
		void setId(int id){
			this->id = id;
		}
		int getId(){
			return id;
		}
		void setName(string name){
			this->name = name;
		}
		string getName(){
			return name;
		}
		void setPrice(double price){
			this->price = price;
		}
		double getPrice(){
			return price;
		}
		
};
