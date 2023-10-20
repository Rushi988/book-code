#ifndef BOOK_H
#define BOOK_H

class book
{
	Private:
			int bookid;
			string bname;
			double price;	
	Public:
		book();
		Book(int bookid,string bname,double price){
			
			this->bookid=bookid;
			this->bname=bname;
			this->price=price;
		}
	//setters
	setId();
	setName();
	setPrice();
	
	//getters
	getId();
	getName();
	getPrice();
	
	display();
	double TotalPrice();
};

#endif
