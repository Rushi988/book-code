#include<iostream>
#include "book.h"

using namespace std;

int main(){
	
	book b1;
	display(b1);
	
	book b2(101,"xyz",500);
	display(b2);
	
	int qty;
	cout<<"enter the qty for book:"
	cin>>qty;
	
	double total=TotalPrice(500.00,15);	
	
	cout<<"total price :"<<total;
}
